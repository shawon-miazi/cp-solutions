#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--)
    {
        char c;
        cin >> c;
        int f = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}