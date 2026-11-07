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
    ll n, k, l = 1, sum = 0;
    cin >> n >> k;
    vector<ll> arr(n), a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (k == n)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
    {
        for (int i = n - k, j = 0; i < n; i++, j++)
        {
            a[j] = arr[i];
        }
        for (int i = n - k - 1, j = k; i >= 0; i--, j++)
        {
            a[j] = arr[i];
        }
        sum = a[0];
        for (int i = 1; i < n; i++)
        {
            if (sum <= (a[i] * i))
                l++;
                sum+=a[i];
        }
        if (l == k)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
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