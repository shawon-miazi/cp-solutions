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
    unsigned long long n,v1=0,v2=0;
    cin>>n;
    vector<unsigned long long>arr(n),a(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        a[i]=bigpow(2,arr[i]);
    }
    sort(a.begin(),a.end());
    
    v2+=a[n-1];
    for (int i=n-2;i>=0;i--)
    {
        if (v1<v2)
        {
            v1+=a[i];
        }
        else 
        {
            v2+=a[i];
        }
    }
    cout<<v1*v2<<endl;
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