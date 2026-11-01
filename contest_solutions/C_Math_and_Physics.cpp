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
    ll n, sum = 0, f = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 1 && f == 0)
            f = 1;
        if (i > 0 && i < n - 1 && arr[i] > 1)
            f = 2;
    }
    if (f == 2)
    {
        for (int i = 0; i < n; i++)
        {
            sum += (arr[i]);
        }
        sum--;
    }
    else if (f)
    {
        for (int i = 0; i < n - 1; i++)
        {
            arr[i + 1] += (arr[i] - 1);
        }
        sum = arr[n - 1];
    }
    else
        sum = -1;
    cout << sum << endl;
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