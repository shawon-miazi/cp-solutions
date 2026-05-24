#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,mx=INT64_MIN,mx2=INT64_MIN,pos=-1,ans=0;
        cin>>n;
        vector<long long int>arr(n),ar(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
            mx2=max(ar[i],mx2);
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]>ar[i])
            {
                swap(arr[i],ar[i]);
            }
            ans+=ar[i];
        }
        for (int i=0;i<n;i++)
        mx=max(arr[i],mx);
        ans+=mx;
        cout<<ans<<endl;
    }
}