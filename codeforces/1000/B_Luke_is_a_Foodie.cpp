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
    int n,x,cnt=0,l,r;
    cin>>n>>x;
    vector<int>ar(n);
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
        if (i==0)
        {
            l=ar[i];
            r=ar[i];
        }
        else 
        {
            l=min(ar[i],l);
            r=max(ar[i],r);
            if ((r-l)>2*x)
            {
                cnt++;
                l=r=ar[i];
            }
        }
    }
    cout<<cnt<<endl;
    
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