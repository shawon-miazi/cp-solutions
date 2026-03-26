#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    int d = min(a, b);
    d = min(d, c);
    if ((a == 1 && b!=1 && c!=1) || (b == 1 && a <= c && c!=1 && a!=1) || (b == 1 && a == 1 && c != 1))
        ans = (a + b) * c;
    else if ((c == 1 && b!=1 && a!=1)|| (b == 1 && a > c && c!=1 && a!=1) || (b == 1 && a != 1 && c == 1))
        ans = (b + c) * a;
    else if (a == 1 && c == 1)
        ans = (b + a) + c;
    else
        ans = a * (b * c);

    cout << ans << endl;
    return 0;
}