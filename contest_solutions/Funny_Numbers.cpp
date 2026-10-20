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
    ll a, b, sum = 0;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
        ll x = i, y=0, m = i;
        for (ll j = 0; j < 50; j++)
        {
            y=0;
            while (x > 0)
            {
                ll t = (x % 10);
                y += t * t;
                x /= 10;
            }
            x = y;
            m = min(m, x);
        }
        sum += m;
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}