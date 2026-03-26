#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,ans=0;
        cin>>a;
        string s="",st="";
        while (a>0)
        {
            if (a%2!=0)
            {
                s+='1';
            }
            else 
            {
                s+='0';
            }
            a/=2;
        }
        reverse(s.begin(),s.end());
        // cout<<s<<" ";
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='1')
            st+='1';
        }
        int b=st.size()-1;
        for (int i=b;i>=0;i--)
        {
            ans+=pow(2,i);
        }
        cout<<ans<<endl;
    }
    return 0;
}