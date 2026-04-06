#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < max)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
}