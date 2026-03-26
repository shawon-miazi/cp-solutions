#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt=0;
        cin >> n;
        int flag = 1;
        for (cnt = 0; n != 1;)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                cnt++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                cnt++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}