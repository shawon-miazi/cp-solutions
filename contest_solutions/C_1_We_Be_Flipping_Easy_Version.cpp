#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x=0,cnt=0,f=0;
        cin>>n;
        vector<long long int>arr(n),psum(n),ps;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            x+=arr[i];
            psum[i]=x;
        }
        for (int i=n-1;i>=0;i--)
        {
            if (arr[i]>0 && f==0)
            {
                ps.push_back(i+1);
                cnt++;
                f=1;
            }
            else if (arr[i]<0 && f==1)
            {
                ps.push_back(i+1);
                cnt++;
                f=0;
            }
        }
        cout<<cnt<<endl;
        for (int i=0,j=ps.size();i<j;i++)
        {
            cout<<ps[i]<<" ";
        }
        cout<<endl;
        
    }
}