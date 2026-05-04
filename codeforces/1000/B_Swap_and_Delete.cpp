#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int c1=0,c2=0,cnt=0,c3=0,c4=0,n=s.size();
        for (int i=0,n=s.size();i<n;i++)
        {
            if (s[i]=='0')
            c1++;
            else 
            c2++;
        }
        if (c1==c2)
        cout<<0<<endl;
        else 
        {
            int  len=0;
            for (int i=0;i<n;i++)
            {
                if (c2>0 && s[i]=='0')
                {
                    c2--;
                    len++;
                }
                else if (c1>0 && s[i]=='1')
                {
                    c1--;
                    len++;
                }
                else break;
            }
            cout<<n-len<<endl;
        }
        
    }
}