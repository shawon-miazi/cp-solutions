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
    ll n, q, sum = 0, x;
    cin >> n >> q;
    sum = (n * (n + 1)) / 2;
    set<int> s{0, n + 1};

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        auto it = s.lower_bound(x);
        ll st = *prev(it), ed = *it, len = -1;

        len = (ed - st) - 1;
        sum -= (len * (len + 1)) / 2;

        ll len1 = (x - st - 1);
        sum += (len1 * (len1 + 1)) / 2;

        ll len2 = (ed - x - 1);
        sum += (len2 * (len2 + 1)) / 2;

        s.insert(it, x);
        cout << sum << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}