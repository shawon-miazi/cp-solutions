#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s="";
        if (n%2==0)
        {
            cout<<-1<<endl;
        }
        else 
        {
            while (n)
            {
                if (n%2==0)
                {
                    s+='0';
                }
                else 
                {
                    s+='1';
                }
                n/=2;
            }
            reverse(s.begin(),s.end());
            cout<<s.size()-1<<endl;
            for (int i=0;i<s.size()-1;i++)
            {
                if (s[i]=='1')
                cout<<2<<" ";
                else 
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}