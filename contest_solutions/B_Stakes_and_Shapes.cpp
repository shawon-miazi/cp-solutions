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
    int a,b,c,ans=0,n=0;
    cin>>a>>b>>c;
    n=a+b+c;
    string s="";
    if (a>=(b+c))
    ans=a;
    else if (b>=(a+c))
    ans=b;
    else if (c>=(a+b))
    ans=c;
    else 
    {
        ans=max(max(a,b),c);
    }
    if (ans==a)
    {
        for (int i=0;i<n;i++)
        s+='P';
    }
    else if (ans==b)
    {
        for (int i=0;i<n;i++)
        s+='R';
    }
    else 
    {
        for (int i=0;i<n;i++)
        s+='S';
    }
    cout<<s<<endl;
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