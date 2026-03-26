#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n, t, num = 1, max;
    cin >> n >> t;
    string s = "";
    if (t == 10)
    {
        if (n == 1)
            cout << -1 << endl;
        else
        {
            s += "1";
            for (int i = 0; i < n - 1; i++)
            {
                s += "0";
            }
            cout << s << endl;
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            s += to_string(t);
        }
        cout << s << endl;
    }

    return 0;
}