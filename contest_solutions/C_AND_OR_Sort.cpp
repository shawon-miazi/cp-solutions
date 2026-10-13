#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f = 1, cnt = INT64_MAX, a = 0, b = 0, pos = -1;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '1')
        {
            cnt=0;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '0')
                    cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            for (int i=0;i<n;i++)
            {
                if (s[i]=='0')
                a++;
            }
            for (int i=0;i<n;i++)
            {
                if (s[i]=='1')
                b++;
                else 
                a--;
                cnt=min(cnt,(a+b));
            }
            cout << cnt << endl;
        }
    }
}