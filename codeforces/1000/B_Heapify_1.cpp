#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1, a, temp;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n; i > 0; i--)
        {
            a = i;
            if (a % 2 == 0)
            {
                while (a > 0)
                {
                    if (arr[a] == i)
                    {
                        if (i != a)
                        {
                            temp = arr[i];
                            arr[i] = arr[a];
                            arr[a] = temp;
                        }
                        break;
                    }
                    if (a % 2 != 0)
                    {
                        break;
                    }
                    a /= 2;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            // cout << arr[i] << " ";
            if (arr[i] != i)
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}