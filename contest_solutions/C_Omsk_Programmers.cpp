#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, d, e;
        cin >> a >> b >> x;
        d = abs(a - b);
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (d==1)
        cout<<d<<endl;
        else
        {
            e=0;
            while (a > 0 || b > 0)
            {
                if (a > b)
                    a /= x;
                else
                    b /= x;
                e++;
                d = min(d, e+abs(a - b));
            }
            cout << d << endl;
        }
    }
}