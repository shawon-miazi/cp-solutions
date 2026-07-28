#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, mn = 1;
        cin >> n;
        int l = 0, r = n - 1,mx=n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (f == 0 && l < r)
        {
            if (arr[l] != mn && arr[l] != mx && arr[r] != mn && arr[r] != mx)
            {
                f = 1;
                break;
            }
            else
            {
                if (arr[l] == mn || arr[l] == mx)
                {
                    if (arr[l] == mn)
                    {
                        mn++;
                    }
                    else
                        mx--;
                    l++;
                }
                if (arr[r] == mn || arr[r] == mx)
                {
                    if (arr[r] == mn)
                    {
                        mn++;
                    }
                    else
                        mx--;
                    r--;
                }
            }
        }
        if (f)
            cout << l + 1 << " " << r + 1 << endl;
        else
            cout << -1 << endl;
    }
}