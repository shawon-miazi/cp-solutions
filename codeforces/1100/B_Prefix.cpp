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

    for (int i = 2; 1LL * i * i <= mx; i++) // for spf/hfp use i<=mx
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
    ll n, sump = 0, sumn = 0, mx;
    cin >> n;
    vector<ll> arr(n), a(n, 0),b(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sump += arr[0];
    sumn += arr[0];
    mx = arr[0];
    a[0] = arr[0];
    b[0]=arr[0];
    mx=max(max(mx,arr[0]+arr[1]),max(mx,arr[1]-arr[0]));
    for (int i=1;i<n-1;i++)
    {
        if (sump>=0)
        a[i]=sump+arr[i];
        else 
        a[i]=arr[i]-sump;
        sump+=a[i];
        if (sumn>=0)
        b[i]=arr[i]-sumn;
        else 
        b[i]=arr[i]+sumn;
        sumn+=b[i];
        mx=max(max(mx,arr[i+1]+sump),max(mx,arr[i+1]-sumn));
    }
    cout<<mx<<endl;
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