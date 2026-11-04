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
    ll n,m,sum=0,cnt=0,z=0,mn=INT64_MAX;
    cin>>n>>m;
    vector<vector<ll>>arr(n,vector<ll>(m,0));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            sum+=abs(arr[i][j]);
            mn=min(abs(arr[i][j]),mn);
            if (arr[i][j]<0)
            cnt++;
            if (arr[i][j]==0)
            z++;
        }
    }
    if (z)
    cout<<sum<<endl;
    else 
    {
        if (cnt%2==0)
        cout<<sum<<endl;
        else 
        {
            cout<<sum-2*mn<<endl;
        }
    }
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