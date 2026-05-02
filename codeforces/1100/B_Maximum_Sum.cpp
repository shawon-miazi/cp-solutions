#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,s1=0,s2=0,x=0,a=0,m=INT64_MAX;
        cin>>n>>k;
        vector<long long int>arr(n),psum(k,0),p1(k,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i=0,j=0;i<k;i++,j+=2)
        {
            s1+=(arr[j]+arr[j+1]);
            p1[i]+=s1;
        }
        for (int i=0,j=n-1;i<k;i++,j--)
        {
            s2+=arr[j];
        }
        x=s2;
        m=min(s1,s2);
        // cout<<m<<" ";
        for (int i=k,l=0;i>0;i--,l++)
        {
            x-=(arr[n-i]);
            a=(x+p1[l]);
            m=min(m,a);
        }
        // cout<<m<<" ";
        long long int sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        cout<<sum-m<<endl;
    }
    return 0;
}