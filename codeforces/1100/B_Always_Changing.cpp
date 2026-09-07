#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0, cnt = 0, val = 0, f = 0;
        cin >> n;
        string s;
        cin >> s;
        char c = s[0];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                cnt++;
                if (i == n - 1)
                {
                    if (c == '0')
                    {
                        a += cnt - 1;
                    }
                    else
                    {
                        b += cnt - 1;
                    }
                    cnt = 1;
                }
            }
            else
            {
                if (c == '0')
                {
                    a += cnt - 1;
                }
                else
                {
                    b += cnt - 1;
                }
                cnt = 1;
                c = s[i];
            }
        }
        // cout << a << " " << b << endl;
        if ((abs(a-b)<2))
        {
            cout<<a+b<<endl;
        }
        else
        {
            int d=0;
            if (a>b)
            {
                if (s[0]=='1')
                d++;
                if (s[n-1]=='1')
                d++;
            }
            else 
            {
                if (s[0]=='0')
                d++;
                if (s[n-1]=='0')
                d++;
            }
            if (abs(a-b)-d<2)
            cout<<(max(a,b)*2-1)<<endl;
            else 
            cout<<-1<<endl;
        }
    }
}