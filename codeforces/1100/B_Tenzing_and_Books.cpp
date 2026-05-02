#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k = 0, d = 1, b = 1, c = 1;
        cin >> n >> x;
        vector<int> arr(n), ar(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] | x) == x)
            {
                k = (arr[i] | k);
            }
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if ((ar[i] | x) == x)
            {
                k = (ar[i] | k);
            }
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i] | x) == x)
            {
                k = (a[i] | k);
            }
            else
                break;
        }
        if (k == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}