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
    string s;
    cin >> s;
    int a = 0, b = 0, n = s.size(), cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'C')
            a++;
        if (s[i] == 'P')
            b++;
        if (cnt == 0 && a > 2 && b)
        {
            cnt++;
            a -= 3;
            b--;
        }
        else if (cnt && a > 1 && b)
        {
            cnt++;
            a -= 2;
            b--;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}