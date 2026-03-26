#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, o, e;
        cin >> n;
        if (n % 2 == 1)
        {
            o = 2;
            e = 3;
            cout << 1 << " ";
        }
        else
        {
            o = 4;
            e = 1;
            cout << 2 << " ";
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << e << " ";
                e += 2;
            }
            else
            {

                cout << o << " ";
                o += 2;
            }
        }
        cout << endl;
    }
    return 0;
}