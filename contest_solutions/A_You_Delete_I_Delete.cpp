#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                s.erase(s.begin() + i);
                break;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                s.erase(s.begin() + i);
                break;
            }
        }
        cout << s << endl;
    }
}