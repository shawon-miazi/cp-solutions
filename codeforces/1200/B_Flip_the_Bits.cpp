#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, c1 = 0, c0 = 0, i, g = 0;
        cin >> n;
        i = n - 1;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
                c0++;
            else
                c1++;
        }
        while (i >= 0)
        {
            if (f % 2)
            {
                if (b[i] == '0')
                    b[i] = '1';
                else
                    b[i] = '0';
            }
            if (a[i] != b[i])
            {
                if (c0 == c1)
                {
                    if (f && f%2)
                    {
                        if (b[i] == '0')
                            b[i] = '1';
                        else
                            b[i] = '0';
                    }
                    f++;
                }
                else
                {
                    g = 1;
                    break;
                }
            }
            else
            {
                if (b[i] == '0')
                    c0--;
                else
                    c1--;
                i--;
            }
        }
        if (g)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
