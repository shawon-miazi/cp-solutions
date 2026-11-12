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
    ll n,m,mx=0;
    cin>>n>>m;
    vector<ll>arr(n),a;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (i==0)
        mx=arr[i];
        else 
        mx=pq.top();

        if (arr[i]<=m)
        {
            pq.push(arr[i]);
            m-=arr[i];
        }
        else if (arr[i]<mx)
        {
            m+=mx;
            m-=arr[i];
            pq.pop();
            pq.push(arr[i]);
        }
        cout<<pq.size()<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();

    return 0;
}