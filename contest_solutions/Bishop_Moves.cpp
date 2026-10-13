#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k, temp, f = 0,k2;
        cin >> a >> b >> c >> d;
        k = a - b;
        k2=a+b;
        temp = c - d;
        if ((a - b) == (c - d) || (a + b) == (c + d))
            cout << 1 << endl;
        else
        {
            while (1)
            {
                if ((a-1)<=0 || (a-k)<=0)
                break;
                a--;
                b = a - k;
                
            }
            while (a < 9 && b < 9)
            {
                if ((c+d) == (a + b))
                    f = 1;
                a++;
                b = a - k;
            }
            while (1)
            {
                if ((c-1)<=0 || (c-temp)<=0)
                break;
                c--;
                d=c-temp;
                
            }
            while (c < 9 && d < 9)
            {
                if ((c + d) == k2)
                    f = 2;
                c++;
                d=c-temp;
            }
            
            if (f)
                cout << 2 << endl;
            else
                cout << -1 << endl;
        }
    }
}
