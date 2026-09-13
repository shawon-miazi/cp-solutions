#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, x;
        cin >> n >> a;
        x = 1;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        if (a < n || (a > (2 * n - 1)))
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < (n - (a - n)); i++)
            {
                arr[i][i] = x;
                x++;
            }
            for (int i = n - (a - n); i < n; i++)
            {
                arr[i][0] = x;
                x++;
                arr[0][i] = x;
                x++;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        arr[i][j] = x;
                        x++;
                    }
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}