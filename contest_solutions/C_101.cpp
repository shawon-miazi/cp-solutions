#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,l,r;
        cin>>n;
        vector<int>v(n),ans(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for (int i=0;i<n;i++)
        {
            if (v[i]==-1)
            {
                ans[i]=1;
                l=i+1;
                break;
            }
            else if (v[i]==1)
            {
                ans[i]=v[i];
                l=i+1;
                break;
            }
            else 
            {
                ans[i]=v[i];
            }
        }
        for (int i=n-1;i>=0;i--)
        {
            if (v[i]==-1)
            {
                ans[i]=1;
                r=i-1;
                break;
            }
            else if (v[i]==1)
            {
                ans[i]=v[i];
                r=i-1;
                break;
            }
            else 
            {
                ans[i]=v[i];
            }
        }
        for (int i=l;i<=r;i++)
        {
            if (v[i]==-1)
            {
                ans[i]=0;
            }
            else{
                ans[i]=v[i];
            }
        }
        for (int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}