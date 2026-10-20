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
    vector<string> a(n);
    vector<int> fre(26, 0), fra(26, 0);
    for (int i = 0, l = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 1)
        {
            for (int j = 0; j < a[l].size(); j++)
            {
                fre[a[l][j] - 'A']++;
            }
            l++;
        }
        for (int j = 0; j < a[i].size(); j++)
        {
            fra[a[i][j] - 'A']++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (fra[j] > fre[j])
            {
                cnt += (fra[j] - fre[j]);
                fre[j] = 0;
            }
            else
            {
                fre[j] -= fra[j];
            }
            fra[j] = 0;
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