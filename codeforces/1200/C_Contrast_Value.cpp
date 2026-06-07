#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, con = 0, x, cnt = 0, f = 0;
        cin >> n;
        vector<int> ar(n), ans, arr;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        arr.push_back(ar[0]);
        for (int i = 1; i < n; i++)
        {
            if (ar[i] != ar[i - 1])
            {
                arr.push_back(ar[i]);
            }
        }
        n = arr.size();
        x = arr[0];
        ans.push_back(arr[0]);
        for (int i = 0; i < n - 1; i++)
        {
            cnt = 0;
            if (arr[i] > arr[i + 1])
            {
                f = 0;
                x = arr[i];
            }
            else
            {
                f = 1;
                x = arr[i];
            }
            for (int j = i + 1; j < n; j++)
            {
                if (f && arr[j] < x)
                {
                    ans.push_back(arr[j - 1]);
                    i = j - 2;
                    break;
                }
                else if (f == 0 && arr[j] > x)
                {
                    ans.push_back(arr[j - 1]);
                    i = j - 2;
                    break;
                }
                else
                    x = arr[j];
                if (j == n - 1)
                {
                    ans.push_back(arr[j]);
                    i = j;
                    break;
                }
            }
        }
        cout << ans.size() << endl;
    }
}