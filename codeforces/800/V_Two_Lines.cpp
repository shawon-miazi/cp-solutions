#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a1, b1, a2, b2, a3, b3;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    // x3 = (x1 + x2) / 2;
    // y3 = (y1 + y2) / 2;
    // a3 = (a1 + a2) / 2;
    // b3 = (b1 + b2) / 2;
    double d1 = 0, d2 = 1;
        d1 = atan((x1 - x2) / (y1 - y2));
        d2 = atan((a1 - a2) / (b1 - b2));
    if ( d1==d2 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}