#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0,ans=INT64_MAX,m=INT64_MAX,mx=INT64_MIN;
        cin>>n;
        vector<long long int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            m=min(arr[i],m);
            mx=max(arr[i],mx);
        }
        for (int i=1;i<=mx;i++)
        {
            sum=max(abs(m-i),abs(mx-i));
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
}