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
    ll n, k, cnt = 0, val = 0;
    cin >> n >> k;
    vector<int> arr(n + 1, 0), pre(n + 1, 0);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pre[i] = (pre[i - 1] + arr[i]) % k;
        if (i > k)
        {
            mp[pre[i]]++;
        }
    }
    for (int i = 1; i <= n - k; i++)
    {
        val = pre[i - 1];
        if (mp.find(val) != mp.end())
        {
            cnt += mp[val];
        }
            
        mp[pre[i + k]]--;
    }
    cout << cnt << endl;
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