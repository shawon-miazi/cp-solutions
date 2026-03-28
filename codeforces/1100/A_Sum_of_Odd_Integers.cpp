#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0, f = 0;
        cin >> n >> k;
        int a = (n / k);
        if (n % k == 0)
        {
            if (a % 2 == 1 && k % 2 == 0 && a > k)
            {
                f = 1;
            }
            else if (a % 2 == 1 && k % 2 == 1 && a >= k)
            {
                f = 1;
            }
            else if (a % 2 == 0 && k % 2 == 0 && a >= k)
            {
                f = 1;
            }
        }
        else
        {
            if (((n % k) % 2 == 0) && ((a % 2 == 1 && k % 2 == 0 && a > k) || (a % 2 == 1 && k % 2 == 1 && a >= k) || (a % 2 == 0 && k % 2 == 0 && a >= k)))
                f = 1;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}