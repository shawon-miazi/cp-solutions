#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long double x, y;
    x = b * log(a);
    y = d * log(c);
    if (a == 1 || c == 1)
    {
        if (c == 1 && a != 1)
            cout << "YES" << endl;
        else if (c != 1 && a == 1)
            cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (x > y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}