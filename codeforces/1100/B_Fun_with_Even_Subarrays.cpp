#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, i = n - 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        i = n - 1;
        while (i >= 0 && arr[i] == arr[n - 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            while (i >= 0)
            {
                i -= (n - 1 - i);
                c++;
                while (i >= 0 && arr[i] == arr[n - 1])
                {
                    i--;
                }
            }

            cout << c << endl;
        }
    }
}