#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        int n, flag = 1, cnt = 0, max;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }

        for (int i = n - 1; i > 0; i--)
        {
            while (arr[i - 1] >= arr[i] && arr[i-1] > 0)
            {
                arr[i-1] /= 2;
                cnt++;
            }
            if (arr[i - 1] >= arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}