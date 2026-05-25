#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> s;
        vector<int> fre(26, 0), ac(26, 0);
        int n = s.size(), f = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            fre[s[i] - 'a']++;
            if (g == 0)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (fre[j] == 1 && ac[j] == 0)
                    {
                        a += ('a' + j);
                        ac[j] = 1;
                    }
                    else if (fre[j] > 1)
                    {
                        g = 1;
                        break;
                    }
                }
            }
        }
        for (int i = 0, j = 0, k = a.size(); i < n; i++)
        {
            if (s[i] == a[j])
            {
                j++;
                if (j == k)
                    j = 0;
            }
            else
            {
                f=1;
                break;
            }
        }
        if (f == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
    }
}