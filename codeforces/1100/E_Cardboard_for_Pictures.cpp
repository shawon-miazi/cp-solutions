#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, f = 0;
        cin >> n >> k;
        long long int l = 1, r = 1e9, m, ans = 0, v;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (l <= r)
        {
            m = (l + r + 1) / 2;
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans += (arr[i] + 2 * m) * (arr[i] + 2 * m);
                if (ans > k)
                    break;
            }
            if (ans <= k)
            {
                v = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }
        cout << v << endl;
    }
}