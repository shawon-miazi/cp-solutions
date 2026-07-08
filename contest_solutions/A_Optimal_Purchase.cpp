#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, ans = 0, d = 0, c;
        cin >> n >> a >> b;
        c = n;
        for (int i = 3; i > 0 && n > 0; i--)
        {
            d = (n / i);
            if (d > 0)
            {
                if ((i * a) > b)
                {
                    ans += (d * b);
                }
                else
                {
                    ans += (d * a * i);
                }
                n -= (d * i);
            }
        }
        cout << ans << endl;
    }
}