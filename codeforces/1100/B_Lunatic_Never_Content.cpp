#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, g = 0, h = 0, ma = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (ma < arr[i])
                ma = arr[i];
        }
        if (n == 1)
            cout << 0 << endl;
        else
        {
            int val = 0, m = 0, x;
            for (int i = 0, j = n - 1; i < n / 2; i++, j--)
            {
                if (arr[i] != arr[j])
                    h = 1;
                val = abs(arr[i] - arr[j]);
                m = __gcd(m, val);
            }
            if (h == 0)
                cout << 0 << endl;
            else
                cout << m << endl;
        }
    }
}