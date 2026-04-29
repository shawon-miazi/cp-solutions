#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, a = "10";
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
                s += "1";
            else
                s += "0";
        }
        if (n > 2)
            cout << s << endl;
        else
            cout << a << endl;
    }
}