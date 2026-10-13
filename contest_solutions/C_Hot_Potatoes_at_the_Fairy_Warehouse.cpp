#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, r = 0, b = 0;
        cin >> n >> k;
        string s, s1;
        cin >> s;
        s1 = s;
        if (k)
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (i == (2 * n - 1))
                {
                    if (s[0] == '0' && s[i] == '1')
                    {
                        s1[0] = '1';
                        s1[i] = '0';
                    }
                }
                else
                {

                    if (s[i + 1] == '0' && s[i] == '1')
                    {
                        s1[i + 1] = '1';
                        s1[i] = '0';
                    }
                }
            }
        }

        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0 && s1[i] == '1')
                b++;
            if (i % 2 && s1[i] == '1')
                r++;
        }
        cout << r << " " << b << endl;
    }
}