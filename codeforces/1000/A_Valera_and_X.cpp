#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, di = 0, dj = 0, f = 0;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    char ic = arr[0][0], ij = arr[0][n - 1], ia = arr[0][1];
    if (ic != ij)
        cout << "NO" << endl;
    else
    {
        for (int i = 0, k = n - 1; i < n; i++, k--)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && j != k && ((arr[i][j] != ia && arr[i][j] != ia) || arr[i][j] == ic))
                    f = 1;
                if (i == j && arr[i][j] != ic)
                {
                    di++;
                }
                if (arr[i][k] != ij)
                {
                    dj++;
                }
            }
        }
        if (di != 0 || dj != 0 || f == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}