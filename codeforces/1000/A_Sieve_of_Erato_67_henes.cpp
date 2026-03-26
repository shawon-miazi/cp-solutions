#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, ans = 67, a, b;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i]==67)
            f=1;
        }
        if (f == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}