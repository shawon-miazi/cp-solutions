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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> fre(26, 0);
    for (int i = 0; i < n; i++)
    {
        fre[s[i] - 'a']++;
    }
    for (int i = 25; i > 0; i--)
    {

        if (fre[i] > 0)
        {
            int f = 0, g = 1;
            char c;
            for (int j = 0; j < n / 2; j++)
            {
                if ((s[j] - 'a' == i || s[n - j - 1] - 'a' == i) && s[j] != s[n - j - 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (fre[j] > 0)
                    {
                        c = 'a' + j;
                        // cout << c << " ";
                        cnt += abs(j - i);
                        fre[j] = fre[i];
                        fre[i] = 0;
                        break;
                    }
                }
                for (int j = 0; j < n; j++)
                {
                    if (s[j] - 'a' == i)
                    {
                        s[j] = c;
                    }
                }
                for (int j = 0; j < n / 2; j++)
                {
                    if (s[j] != s[n - j - 1])
                    {
                        g = 0;
                        break;
                    }
                }
                if (g)
                    break;
            }
        }
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