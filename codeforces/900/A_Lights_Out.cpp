#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    vector<vector<int>> ar(3, vector<int>(3, 1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] % 2 == 1)
            {
                if (j + 1 < 3)
                {
                    if (ar[i][j + 1] == 1)
                    {
                        ar[i][j + 1] = 0;
                    }
                    else
                        ar[i][j + 1] = 1;
                }
                if (j - 1 >= 0)
                {
                    if (ar[i][j - 1] == 1)
                    {
                        ar[i][j - 1] = 0;
                    }
                    else
                        ar[i][j - 1] = 1;
                }
                if (i + 1 < 3)
                {
                    if (ar[i+1][j] == 1)
                    {
                        ar[i+1][j] = 0;
                    }
                    else
                        ar[i+1][j] = 1;
                }
                if (i - 1 >= 0)
                {
                    if (ar[i-1][j] == 1)
                    {
                        ar[i-1][j] = 0;
                    }
                    else
                        ar[i-1][j] = 1;
                }
                if (ar[i][j] == 1)
                {
                    ar[i][j] = 0;
                }
                else
                    ar[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ar[i][j];
        }
        cout << endl;
    }

    return 0;
}