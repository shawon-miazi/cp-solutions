#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar, ac,br ,bc;
    cin >> ar >> ac;
    vector<vector<int>> arr(ar, vector<int>(ac, 0));
    for (int r = 0; r < ar; r++)
    {
        for (int c = 0; c < ac; c++)
        {
            cin >> arr[r][c];
        }
    }
    cin>>br>>bc;
    vector<vector<int>> ara(br, vector<int>(bc, 0));
    vector<vector<int>> n(ar, vector<int>(bc, 0));
    for (int r = 0; r < br; r++)
    {
        for (int c = 0; c < bc; c++)
        {
            cin >> ara[r][c];
        }
    }
    for (int r = 0; r < ar; r++)
    {
        for (int c = 0; c < bc; c++)
        {
            for (int j = 0; j < ac; j++)
            {
                n[r][c] += (arr[r][j] * ara[j][c]);
            }
        }
    }
    for (int r = 0; r < ar; r++)
    {
        for (int c = 0; c < bc; c++)
            cout << n[r][c] << " ";
        cout << endl;
    }
    return 0;
}