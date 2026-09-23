#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    long long int n, x, f = 1;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        long long int j = 2;
        while (j*j<=x)
        {
            while (x % j == 0)
            {
                x /= j;
                mp[j]++;
            }
            j++;
        }
        if (x>1)
        mp[x]++;
    }
    for (auto a : mp)
    {
        if (a.second % n)
        {
            f = 0;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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