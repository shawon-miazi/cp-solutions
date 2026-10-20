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
    int n, k, l, sz;
    cin >> n >> k >> l;
    string s, a;
    cin >> s >> a;
    vector<int> ar(n);
    vector<int> fre(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        fre[a[i] - 'a']++;
    }
    int cnt = 0, val = 0;
    for (int i = 0; i < n; i++)
    {
        if (fre[s[i] - 'a'] != 0)
        {
            cnt++;
        }
        ar[i] = cnt;
        if (ar[i] >= k)
            val++;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = cnt - ar[i];
        if (temp >= k)
            val++;
        else
            break;
    }
    cout << val << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}