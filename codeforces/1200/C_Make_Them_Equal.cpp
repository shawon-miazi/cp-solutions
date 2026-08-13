#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f = 1,g=1;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
            {
                f = 0;
            }
        }
        if (f)
            cout << 0 << endl;
        else
        {
            if (s[n - 1] == c)
            {
                cout << 1 << endl;
                cout << n << endl;
            }
            else
            {
                for (int i=2,j;i<=n;i++)
                {
                    g=i;
                    for (int l=1;(i*l)<=n;l++)
                    {
                        if (s[(i*l)-1]!=c)
                        {
                            g=1;
                            break;
                        }
                    }
                    if (g!=1)   
                    break;
                }
                if (g>1)
                {
                    cout<<1<<endl;
                    cout<<g<<endl;
                }
                else 
                {
                    cout << 2 << endl;
                    cout << n - 1 << " " << n << endl;
                }
            }
        }
    }
}