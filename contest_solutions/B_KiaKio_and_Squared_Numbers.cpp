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

void solve()
{
    ll n,val,cnt=0;
    cin>>n;
    vector<ll>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        for (int j=0;j<500;j++)
        {
            val=0;
            while (arr[i]>0)
            {
                ll temp=arr[i]%10;
                val+=(temp*temp);
                arr[i]/=10;
            }
            arr[i]=val;
        }
    }
    // for (int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<"->";
    map<ll,ll>mp;
    for (int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for (auto a:mp)
    {
        if (a.second>1)
        cnt+=(a.second*(a.second-1))/2;
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