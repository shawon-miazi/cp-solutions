#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s="";
        int n,k,c1=0,c2=0;
        cin>>n>>k;
        if (k==(n-1))
        cout<<-1<<endl;
        else 
        {
            int l=(k/2);
            for (int i=0;i<=l;i++)
            {
                s+="1";
            }
            for (int i=0;i<=(k-l);i++)
            {
                s+="0";
            }
            for (int i=s.size(),f=0;i<n;i++)
            {
                if (f)
                {
                    s+="0";
                    f=0;
                }
                else 
                {
                    s+="1";
                    f=1;
                }
            }
            cout<<s<<endl;
        }
    }
}