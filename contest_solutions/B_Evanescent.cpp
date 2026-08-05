#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, pos = -1, cnt = 0, mc = 0, mp = -1, ep = -1;
        cin >> n;
        string s, a = "";
        cin >> s;
        a += s[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                mc = max(cnt, mc);
            }
            else if ((i + 2) < n)
            {
                if (s[i] == s[i + 2])
                {
                    pos = i + 1;
                    cnt++;
                    mc = max(mc, cnt);
                    i++;
                }
            }
            else
            {
                if (cnt >= mc)
                {
                    mp = pos;
                }
                cnt = 0;
            }
            if (cnt >= mc)
            {
                mp = pos;
            }
            if (i>0 && i<n-1)
            {
                if (s[i]!=s[i-1] && s[i+1]!=s[i])
                ep=i;
            }
        }
        if (pos >= 0)
            s.erase(s.begin() + mp);
        else if (ep >= 0)
        {
            s.erase(s.begin() + ep);
        }
        else 
        s.erase(s.begin()+1);
        for (int i = 1, j = 0; i < s.size(); i++)
        {
            if (s[i] != a[j])
            {
                a += s[i];
                j++;
            }
        }
        cout << a.size() << endl;
    }
}