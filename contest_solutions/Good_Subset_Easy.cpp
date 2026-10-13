#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            x = arr[i];
            cnt = 0;
            while (x > 1)
            {
                x = x >> 1;
                cnt++;
            }
            mp[cnt]++;
        }
        int ans = 0;
        for (auto a : mp)
        {
            ans = max(ans, a.second);
        }
        cout << ans << endl;
    }
}