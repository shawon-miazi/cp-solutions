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
    ll a, b, ans = INT64_MAX;
    cin >> a >> b;
    if (a < b)
        ans = 1;
    else if (b!=1)
    {
        ll x = a, cnt = 0;
        while (x)
        {
            x /= b;
            cnt++;
        }
        ans=cnt;
    }
    for (ll i = b+1, j = 1; i < a + 2; i++, j++)
    {
        ll x = a, cnt = 0;
        while (x)
        {
            x /= i;
            cnt++;
        }
        ans = min(ans, (j + cnt));
        if (j >= ans)
            break;
    }
    cout << ans << endl;
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