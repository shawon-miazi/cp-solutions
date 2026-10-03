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
    ll n,k,ms=0,sum=0;
    cin>>n>>k;
    vector<int>arr(n),pri;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=2;i*i<=k;i++)
    {
        if (k%i==0){
            while (k%i==0)
            k/=i;
            pri.push_back(i);
        }
    }
    if (k>1)
    pri.push_back(k);
    for (auto a : pri)
    {  
        sum=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]%a==0)
            sum+=arr[i];
        }
        ms=max(sum,ms);
    }
    cout<<ms<<endl;
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