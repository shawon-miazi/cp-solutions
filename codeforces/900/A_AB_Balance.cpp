#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int cnta = 0, cntb = 0;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && a[i] == 'b' && a[i - 1] == 'a')
            {
                cnta++;
            }
            else if (i != 0 && a[i] == 'a' && a[i - 1] == 'b')
            {
                cntb++;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (cnta > cntb)
            {
                if (i != 0 && a[i] == 'b' && a[i - 1] == 'a')
                {
                    a[i - 1] = 'b';
                    cnta--;
                }
                if (cnta == cntb)
                {
                    break;
                }
            }
            else if (cnta < cntb)
            {
                if (i != 0 && a[i] == 'a' && a[i - 1] == 'b')
                {
                    a[i - 1] = 'a';
                    cntb--;
                }
                if (cnta == cntb)
                {
                    break;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}