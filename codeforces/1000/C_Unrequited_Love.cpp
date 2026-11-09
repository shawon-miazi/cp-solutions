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
    ll n,ans=0;
    cin>>n;
    vector<ll>arr(n),a;
    map<ll,ll>mp;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n-4;i++)
    {
        ll cur=arr[i]+arr[i+2]-arr[i+4];
        mp[cur]++;
        a.push_back(cur);
    }
    for (auto x : mp)
    {
        if (x.second>=2)
        {
            ans+=((x.second*(x.second-1))/2);
        }
    }
    for (int i=0;i<a.size();i++)
    {
        if (i>1 && a[i]==a[i-2])
        ans--;
        if (i>3 && a[i]==a[i-4])
        ans--;
    }
    cout<<ans<<endl;
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