#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0, ans = 0, x = 0;
        cin >> n;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sum = 0;
        ans = INT32_MIN;
        int i = 0, j = 0;
        while (j < n)
        {
            if (sum < 0)
            {
                sum = 0;
                i = j;
            }
            if (i < j)
            {
                if ((arr[j] ^ arr[j - 1]) & 1)
                {
                    sum += arr[j];
                }
                else
                {
                    i = j;
                    sum = arr[j];
                }
            }
            else
            {
                sum = arr[j];
            }
            ans = max(ans, sum);
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}