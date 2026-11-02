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
    ll n, ans = 0, val;
    cin >> n;
    val = n / 2;
    vector<ll> m, a(n,0);
    vector<pair<int,int>>arr(n);
    set<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second=i;
    }
    sort(arr.rbegin(), arr.rend());
    for (int i = 0; i <= n; i++)
    {
        if (i != val)
        {
            m.push_back(abs(i - val));
        }
    }
    sort(m.begin(), m.end());
    for (int i = 0; i < n; i++)
    {
        ans += (m[i] * 2 * arr[i].first);
        if (c.find(val + m[i]) == c.end())
        {
            a[arr[i].second]=m[i] + val;
            c.insert(val + m[i]);
        }
        else
        {
            a[arr[i].second]=val - m[i];
            c.insert(val - m[i]);
        }
    }
    cout << ans << endl;
    cout << val << " ";
    for (auto x:a)
    cout<<x<<" ";   
    cout << endl;
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