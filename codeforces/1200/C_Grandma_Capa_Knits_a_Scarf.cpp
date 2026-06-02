#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0,cnt=0,mc=INT32_MAX,g=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int>fre(26,0);
        for (int i=0;i<n;i++)
        {
            fre[s[i]-'a']=1;
        }
        for (int i=0;i<26;i++)
        {
            f=1;
            cnt=0;
            if (fre[i]==1)
            {
                for (int j=0,l=n-1;j<l;)
                {
                    if (s[j]==(char)('a'+i) && s[l]==(char)('a'+i))
                    {
                        j++;
                        l--;
                    }
                    else if (s[j]==(char)('a'+i))
                    {
                        j++;
                        cnt++;
                    }
                    else if (s[l]==(char)('a'+i))
                    {
                        l--;
                        cnt++;
                    }
                    if (s[l]!=s[j] && s[l]!=(char)('a'+i) && s[j]!=(char)('a'+i))
                    {
                        f=0;
                        break;
                    }
                    if (s[l]==s[j] && s[l]!=(char)('a'+i) && s[j]!=(char)('a'+i))
                    {
                        l--;
                        j++;
                    }
                }
                if (f)
                {
                    g=1;
                    mc=min(cnt,mc);
                }
            }
        }
        if (g)
        cout<<mc<<endl;
        else
        cout<<-1<<endl;
    }
}
