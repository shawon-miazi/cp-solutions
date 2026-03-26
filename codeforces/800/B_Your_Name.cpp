#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n;
        cin>>n;
        string s,str,st;
        for (int i=0;i<(n*2);i++)
        {
            char a;
            cin>>a;
            if (i<n)
            str.push_back(a);
            else if (i>=n)
            st.push_back(a);
        }
        
        int flag=1;
        sort(str.begin(),str.end());
        sort(st.begin(),st.end());
        
        for (int i=0;i<str.size();i++)
        {
            if (str[i] != st[i])
            {
                flag=0;
                break;
            }
        }
        if (flag==0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}