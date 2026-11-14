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
    int n, k, cnt = 0, f = 0, pos = -1;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n - 6; i++)
    {
        if (s[i] == '?' && s[i + 2] == '?' && s[i + 3] == '?' && s[i + 5] == '?')
        {
            cnt++;
            s[i] = 'S';
            s[i + 1] = 'C';
            s[i + 2] = 'N';
            s[i + 3] = 'U';
            s[i + 4] = 'C';
            s[i + 5] = 'P';
            s[i + 6] = 'C';
            if (cnt == k)
            {
                f = 1;
                break;
            }
        }
    }

    if (f)
    {
        for (int i = 0; i < n; i++)
            if (s[i] == '?')
                s[i] = 'A';
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
        cout << "No" << endl;
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