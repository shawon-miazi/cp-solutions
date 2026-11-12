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
    ll n,a,b;
    cin>>n>>a>>b;
    vector<pair<ll,ll>>arr(n);
    vector<ll>pa(n),pr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    ll l=0,r=0,x=0,y=0;
    for (int i=0;i<n;i++)
    {
        for (int j=l;j<i;j++)
        {
            if ((arr[i].first-arr[j].first)>=b)
            {
                l++;
            }
            else 
            break;
        }
        for (int j=r;j<i;j++)
        {
            if ((arr[i].first-arr[j].first)>=a)
            {
                r++;
            }
            else 
            break;
        }
        for (int j=x;j<n;j++)
        {
            if ((arr[j].first-arr[i].first)<a)
            {
                x++;
            }
            else 
            break;
        }
        for (int j=y;j<n;j++)
        {
            if ((arr[j].first-arr[i].first)<b)
            {
                y++;
            }
            else 
            break;
        }
        pa[arr[i].second]=abs(l-r);
        pr[arr[i].second]=abs(x-y);
    }
    for (int i=0;i<n;i++)
    cout<<pr[i]<<" "<<pa[i]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}