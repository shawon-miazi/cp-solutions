#include <bits/stdc++.h>
using namespace std;

using ll = long long int ;

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

void solve()
{
    ll n, k, sum = 0, l = 0;
    cin >> n >> k;
    vector<ll> arr(n), vec;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = n - k; i < n; i++)
    {
        if (i >= k - 1 && i <= j)
            sum += arr[i];
        else
            vec.push_back(arr[i]);
    }
    ll m = vec.size();
    l=max(l,(m-(k-1)));
    // for (auto a : vec)
    //     cout << a << " ";
    // cout << "->";
    for (int i = 0, j = m - 1; l--; i++, j--)
    {
        sum += max(vec[i], vec[j]);
        // cout << sum << "->";
    }
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