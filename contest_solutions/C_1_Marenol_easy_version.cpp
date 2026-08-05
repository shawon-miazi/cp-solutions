#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a1 = 0, a0 = 0, b1 = 0, b0 = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2)
                    a0++;
                else
                    a1++;
            }
            if (b[i] == '1')
            {
                if (i % 2)
                    b0++;
                else
                    b1++;
            }
            
        }
        if (a0 == b0 && a1 == b1)
            cout << "YES" << endl;
        else
            cout << "NO"<<endl;
    }
}