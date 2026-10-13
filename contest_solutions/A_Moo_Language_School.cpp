#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,cnt=0,f=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i=0,j=k;i<n;i++)
        {
            if (i<j && s[i]=='0')
            {
                f=1;
            }
            if (i==j-1)
            {
                if (f==0)
                {
                    cnt++;
                }
                else 
                f=0;
                j+=k;
            }
        }
        cout<<cnt<<endl;
    }
}