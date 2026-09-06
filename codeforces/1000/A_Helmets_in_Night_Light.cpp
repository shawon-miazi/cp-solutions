#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, ans = 0, val;
        cin >> n >> k;
        val = n;
        vector<pair<long long int, long long int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        sort(v.begin(), v.end());
        ans += k;
        val--;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first < k)
            {
                if (val > v[i].second)
                {
                    ans += (v[i].second * v[i].first);
                    val -= v[i].second;
                }
                else
                {
                    ans += (v[i].first * val);
                    val = 0;
                    v[i].second = 0;
                }
                if (val < 1)
                    break;
            }
            else
            {
                ans += (val * k);
                break;
            }
        }
        cout << ans << endl;
    }
}