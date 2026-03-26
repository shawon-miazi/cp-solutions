#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, y, minv;
    cin >> n >> x >> y;
    minv = min(x, y);
    long long int l = 0, r = max(x, y) * (n - 1), m, num;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        while (r > l + 1)
        {
            m = (l + r) / 2;
            num = (m / x) + (m / y);
            if (num < n - 1)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        r += minv;
        cout << r << endl;
    }

    return 0;
}