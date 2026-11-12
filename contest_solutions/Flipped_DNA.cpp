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
    int n,f=1;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for (int i=0;i<n;i++)
    {
        if ((a[i]=='A'|| a[i]=='T') && (b[i]=='C'|| b[i]=='G'))
        {
            f=0;
            break;
        }
        if ((a[i]=='C'|| a[i]=='G') && (b[i]=='A'|| b[i]=='T'))
        {
            f=0;
            break;
        }
    }
    if (f)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}