#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 1)
            {
                sum += a[i];
            }
        }
        if (a[n - 1] == 1)
            sum += 1;
        cout << sum << endl;
    }
}