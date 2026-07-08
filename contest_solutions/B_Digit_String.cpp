#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, b;
        cin >> s;
        vector<string> a = {"4", "12", "20", "24", "32", "40", "44"};
        int f = 1, cnt = 0;
        while (1)
        {
            f = 1;
            for (int i=0,k=s.size();i<k;i++)
            {
                if (s[i]=='4')
                {
                    f=0;
                    cnt++;
                    s.erase(i,1);
                }
            }
            if (f)
                break;
        }
        vector<int>fre(4,0);
        for (int i=0,k=s.size();i<k;i++)
        {
            if (s[i]=='2')
            {
                for (int j=i+1;j<k;j++)
                {
                    if (s[j]=='0')
                    {
                        fre[0]++;
                    }
                }
            }
            break;
        }
        for (int i=s.size()-1;i>=0;i--)
        {
            if (s[i]=='2')
            {
                for (int j=i-1;j>=0;j--)
                {
                    if (s[j]=='3')
                    {
                        fre[3]++;
                    }
                }
            }
            break;
        }
        for (int i=s.size()-1;i>=0;i--)
        {
            if (s[i]=='2')
            {
                for (int j=i-1;j>=0;j--)
                {
                    if (s[j]=='1')
                    {
                        fre[1]++;
                    }
                }
            }
            break;
        }
        for (int i=0,k=s.size();i<k;i++)
        {
            if (s[i]=='1')
            {
                for (int j=i+1;j<k;j++)
                {
                    if (s[j]=='2')
                    {
                        fre[2]++;
                        s.erase(j,1);  ///2 for 12
                    }
                }
            }
            break;
        }
        for (int i=0,k=s.size();i<k;i++)
        {
            if (s[i]=='3')
            {
                for (int j=i+1;j<k;j++)
                {
                    if (s[j]=='2')
                    {
                        fre[2]++;
                        s.erase(j,1); /// 2 for 32
                    }
                }
            }
            break;
        }
        for (int i=s.size()-1;i>=0;i--)
        {
            if (s[i]=='0')
            {
                for (int j=i-1;j>=0;j--)
                {
                    if (s[j]=='2')
                    {
                        fre[2]++;
                        s.erase(j,1);
                    }
                }
            }
            break;
        }
        if ((fre[0]+fre[1]+fre[3])<fre[2])
        cnt+=(fre[0]+fre[1]+fre[3]);
        else 
        cnt+=fre[2];
        cout << cnt << endl;
    }
}