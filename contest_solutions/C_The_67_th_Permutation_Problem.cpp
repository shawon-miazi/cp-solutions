#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(3 * n);
        for (int i = 3*n - 1, j = 3*n, k = n; i >= 0; i--)
        {
            if (i % 3 == 1 || i % 3 == 2)
            {
                arr[i] = j;
                j--;
            }
            else
            {
                arr[i] = k;
                k--;
            }
        }
        for (int i = 0; i < (3 * n); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}