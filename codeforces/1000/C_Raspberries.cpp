#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,m=INT32_MAX,a,c2=0,c1=0;
        cin>>n>>k;
        for (int i=0;i<n;i++)
        {
            cin>>a;
            if (a==2 || a%2==0)
            c2++;
            if (a==1 || a%2==1)
            c1++;
            if (a%k)
            m=min(m,(k-(a%k)));
            else 
            m=0;
        }
        if (k==4)
        {
            if (c2>1)
            m=0;
            if (c1>1)
            {
                m=min(m,2);
            }
            if (c1>0 && c2>0)
            {
                m=min(m,1);
            }
        }
        cout<<m<<endl;
    }
}