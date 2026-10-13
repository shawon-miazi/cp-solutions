#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c0 = 0, c1 = 0, cn0 = 0, cn1 = 0;
        cin >> n;
        char x;
        string s;
        cin >> s;
        x = s[0];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
            if (i > 0)
            {
                if (s[i] == x)
                {
                    if (x == '0')
                        cn0++;
                    else
                        cn1++;
                }
                else
                    x = s[i];
            }
        }
        if (abs(cn0 - cn1) > 2)
            cout << -1 << endl;
        else if (cn0==cn1)
        cout<<(cn0+cn1)<<endl;
        else 
        cout<<(cn0+cn1+1)<<endl;
    }
}
