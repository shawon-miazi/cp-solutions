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
    ll w,h,k,c1,c2,ma=0,mb=0;
    cin>>w>>h;
    
    cin>>k;
    vector<ll>a(k);
    for (int i=0;i<k;i++)
    cin>>a[i];
    ma=a[k-1]-a[0];

    cin>>k;
    vector<ll>b(k);
    for (int i=0;i<k;i++)
    cin>>b[i];
    ma=max(b[k-1]-b[0],ma);

    cin>>k;
    vector<ll>c(k);
    for (int i=0;i<k;i++)
    cin>>c[i];
    mb=c[k-1]-c[0];

    cin>>k;
    vector<ll>d(k);
    for (int i=0;i<k;i++)
    cin>>d[i];
    mb=max(d[k-1]-d[0],mb);
    cout<<max((ma*h),(mb*w))<<endl;
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