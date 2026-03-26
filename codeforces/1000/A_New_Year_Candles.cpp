#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, ans = 0, p = 0;
    cin >> n >> b;
    ans=n;
    while (n >= b)
    {
        ans+=(n/b);
        n=(n/b)+(n%b);
    }
    cout << ans << endl;
    return 0;
}