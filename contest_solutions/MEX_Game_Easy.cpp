#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int mx = 1'000'000;

vector<bool> isprime(mx + 1, true);

void sieve()
{
    isprime[0] = isprime[1] = false;

    for (int i = 2; 1LL * i * i <= mx; i++)  //for spf/hfp use i<=mx
    {
        if (isprime[i])
        {
            for (ll j = 1LL * i * i; j <= mx; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

ll bigpow(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a);
        a = (a * a);
        n >>= 1;
    }
    return ans;
}

void solve()
{
    ll n,x,f=0,m=0,g=1;
    cin>>n;
    priority_queue<int>pr;
    vector<int>fre(105,0);
    for (int i=0;i<n;i++)
    {
        cin>>x;
        fre[x]++;
        if (x==m)
        m++;
    }
    for (int i=0;i<105;i++)
    {
        if (i>0 && fre[i]>1)
        {
            if (((fre[i]-1)*i)%2)
            {
                if (f)
                f=0;
                else 
                f=1;
            }
            fre[i]=1;
        }
        if (i>0 && fre[i]>0)
        {
            pr.push(i);
            // cout<<i<<"->";
        }
    }
    while (g && pr.size())
    {
        g=0;
        ll a=pr.top(),b;
        pr.pop();
        if (pr.size())
        b=pr.top();
        if ((a-1)>m)
        {
            if ((a-(m+1))%2)
            {
                if (f)
                f=0;
                else 
                f=1;
            }
            a=m+1;
            g=1;
            pr.push(a);
        }
        // else if (pr.size()>1 && a==b && (a+1)==m)
        // {
        //     a--;
        //     pr.push(a);
        //     g=1;
        // }
    }
    if (f)
    cout<<"Alice"<<endl;
    else 
    cout<<"Bob"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}