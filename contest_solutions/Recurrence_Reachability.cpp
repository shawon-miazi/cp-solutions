#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, f = 0, x=0, y=0;
        cin >> a >> b;
        if ((a * 3) <= b)
            f = 1;
        if (f)
            cout << -1 << endl;
        else
        {
            f=0;
            for (int i = 1; i < a; i++)
            {
                x=i;
                y= (b + (2 * i)) / 3;
                if ((b + (2 * i)) % 3 == 0 && y>x && y>1 && y<=a)
                {
                    x = i;
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << x << " " << y << endl;
            else
                cout << -1 << endl;
        }
    }
}
