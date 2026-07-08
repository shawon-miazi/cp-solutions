#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,f=1;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i=0;i<n-k;i++)
        {
            if (s[i]=='1')
            {
                s[i]='0';
                if (s[i+k]=='0')
                s[i+k]='1';
                else 
                s[i+k]='0';
            }
        }
        for (int i=0;i<n;i++)
        {
            if (s[i]=='1')
            {
                f=0;
                break;
            }
        }
        if (f)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}