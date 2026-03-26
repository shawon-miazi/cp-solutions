#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, cnt = 0, ma = 0, pos = 0,va=0,vb=0;
        cin >> n >> a;
        string s;
        cin >> s;
        vector<int>fre(n,0);
        for (int i = 0; i < a; i++)
        {
            if (s[i] == 'W')
            {
                cnt++;
            }
        }
        ma=cnt;
        for (int i=0,j=a;j<n;i++,j++)
        {
            if (s[i]=='W') cnt--;
            if (s[j]=='W') cnt++;
            if(cnt<ma) ma=cnt;
        }
        cout<<ma<<endl;
        
    }
}