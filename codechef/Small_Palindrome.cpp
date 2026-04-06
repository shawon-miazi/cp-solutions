#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = 0, j = 0; i < (a + b); i++)
        {
            if (i < (a / 2))
            {
                cout << 1;
            }
            else if (i >= (a / 2) && j < b)
            {
                cout << 2;
                j++;
            }
            else
                cout << 1;
        }
        cout<<endl;
    }
}