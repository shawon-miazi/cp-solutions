#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n;
        cin>>n;
        int s[n],f[n],t;
        for (int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for (int i=0;i<n;i++)
        {
            if (i==0)
            {
                t=f[i]-s[i];
            }
        else if (i!=0)
        {
            if (s[i]>f[i-1])
            {
                t=f[i]-s[i];
            }
            else
            {
                t=f[i]-f[i-1];
            }
        }
            cout<<t<<" ";
        }
        cout<<endl;
    }
    return 0;
}