#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,d=998244353,f=0,v=1;
        cin>>n;
        string s;
        cin>>s;
        vector<int>c(n,0);
        for (int i=0;i+2<n;i++)
        {
            if (s[i]==s[i+2] && s[i]!='?')
            {
                f=1;
                break;
            }
        }
        if (f)
        cout<<0<<endl;
        else 
        {
            for (int i=0,j;i<n;i++)
            {
                if (s[i]=='?' && c[i]==0 )
                {
                    if ((i+2<n && s[i+2]!='?') || (i-2>=0 && s[i-2]!='?'))
                    v=v;
                    else 
                    v=((v%d)*2)%d;
                    j=i+2;
                    while (j<n && s[j]=='?' && c[j]==0)
                    {
                        c[j]=1;
                        j+=2;
                    }
                }
            }
            cout<<v<<endl;
        }
    }
}