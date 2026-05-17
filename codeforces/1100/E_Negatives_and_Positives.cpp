#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0, cnt = 0, z = 0, m = INT64_MAX;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (abs(arr[i]) < m)
                m = abs(arr[i]);
            if (arr[i] < 0)
                cnt++;
            if (arr[i] == 0)
                z++;
        }
        if (cnt % 2 == 0 || (z > 0))
        {
            for (int i = 0; i < n; i++)
            {
                sum += abs(arr[i]);
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += abs(arr[i]);
            }
            sum-=(2*m);
        }
        cout << sum << endl;
    }
}