#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        long long int sum = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        // int max = arr[n - 1], maxs = arr[n - 2];
        if (n > m)
            cout << "NO" << endl;
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (i == n - 1)
                    sum += (arr[i] * 2) + 1;
                else if (i == 0)
                    sum += 1;
                else
                    sum += arr[i] + 1;
                if (sum > m)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}