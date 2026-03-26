#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 1;
        while (1)
        {
            if (n % 10 == 0 && n%2021!=0)
            {
                if (n - 2020 >= 0)
                {
                    n -= 2020;
                    if (n == 0)
                        break;
                }

                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (n - 2021 >= 0)
                {
                    n -= 2021;
                    if (n == 0)
                        break;
                }

                else
                {
                    flag = 0;
                    break;
                }
            }
            
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}