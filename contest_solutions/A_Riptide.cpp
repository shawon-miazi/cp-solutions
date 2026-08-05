#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n = 0;
        cin >> a >> b >> c;
        while (a != b && b != c && a != c)
        {
            if (a > b && a > c)
            {
                if (b < c)
                {
                    b++;
                }
                else
                    c++;
                a--;
            }
            else if (b > a && b > c)
            {
                if (a < c)
                {
                    a++;
                }
                else
                    c++;
                b--;
            }
            else if (c > b && a < c)
            {
                if (b < a)
                {
                    b++;
                }
                else
                    a++;
                c--;
            }
            n++;
        }
        cout<<n<<endl;
    }
}