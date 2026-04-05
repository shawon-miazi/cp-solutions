#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, f = 0;
    cin >> a;
    vector<vector<int>> arr(n, vector<int>(2));
    vector<bool> ck(7, 0);
    int x = a, y = 7 - a;

    for (int i = 0; i < n; i++)
    {
        vector<bool> ck(7, 0);
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
            ck[arr[i][j]] = true;
            ck[7 - arr[i][j]] = true;
        }
        if (ck[x] == true || ck[y] == true)
            f = 1;
    }
    if (f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}