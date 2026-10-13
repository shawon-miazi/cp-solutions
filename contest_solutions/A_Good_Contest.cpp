#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, an = 0, a,ans=0;
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            an = (n - a);
            ans=max(ans,an);
        }
        if (ans > n)
            cout << n << endl;
        else
            cout << ans << endl;
    }
}