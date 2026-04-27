#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, a, b, val, x = 0, mx = INT_MAX, y = 0, my = INT_MAX;
        cin >> n >> k >> a >> b;
        vector<vector<long long int>> arr(n, vector<long long int>(2, 0));
        vector<vector<long long int>> ma(k, vector<long long int>(2, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
                if (i < k)
                    ma[i][j] = arr[i][j];
            }
        }
        if (b > k || a > k || k==0)
            val = abs(arr[a - 1][0] - arr[b - 1][0]) + abs(arr[a - 1][1] - arr[b - 1][1]);
        else
            val = 0;
        if (val == 0)
            cout << 0 << endl;
        else
        {
            if (a > k )
            {
                for (int i = 0; i < k; i++)
                {
                    x = abs(arr[i][0] - arr[a - 1][0]) + abs(arr[a - 1][1] - arr[i][1]);
                    mx = min(x, mx);
                }
            }
            else
                mx = 0;
            if (b > k )
            {
                for (int i = 0; i < k; i++)
                {
                    y = abs(arr[i][0] - arr[b - 1][0]) + abs(arr[b - 1][1] - arr[i][1]);
                    my = min(y, my);
                }
            }
            else
                my = 0;
            mx += my;
            long long int ans = val;
            if (mx >= 0)
                ans = min(val, mx);
            cout << ans << endl;
        }
    }
}