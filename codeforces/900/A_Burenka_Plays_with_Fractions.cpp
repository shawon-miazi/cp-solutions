#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int a, b, c, d;
    long long int  x, y, z,g;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        x = a * d;
        y = c * b;

        if (x == y || (a == 0 && c == 0))
        {
            cout << 0 << endl;
        }
        else if (a == 0 || c == 0)
            cout << 1 << endl;
        else if (x%y==0 || y%x==0)
        {
            cout<<1<<endl;
        }
        else 
        cout<<2<<endl;
    }
    return 0;
}