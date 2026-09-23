#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll n, c = 0, x, mx = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    map<ll, ll> ma, mb;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            x = a[i];

        if (a[i] == x)
        {
            c++;
        }
        if (a[i] != x || i == n - 1)
        {
            if (c > ma[x])
                ma[x] = c;
            c = 1;
            if (i == n - 1 && a[i] != x && c > ma[a[i]])
                ma[a[i]] = 1;
            x = a[i];
        }
        mx = max(a[i], mx);
    }
    c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i == 0)
            x = b[i];

        if (b[i] == x)
        {
            c++;
        }
        if (b[i] != x || i == n - 1)
        {
            if (c > mb[x])
                mb[x] = c;
            c = 1;
            if (i == n - 1 && b[i] != x && c > mb[b[i]])
                mb[b[i]] = 1;
            x = b[i];
        }
        mx = max(b[i], mx);
    }
    ll val = 0;
    for (int i = 1; i <= mx; i++)
    {
        // cout << ma[i] << " " << mb[i] << "->";
        val = max(val, (ma[i] + mb[i]));
    }
    cout << val << endl;
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