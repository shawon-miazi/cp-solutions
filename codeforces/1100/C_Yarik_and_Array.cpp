#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0,ans=0,x=0;
        cin>>n;
        vector<long long int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum=arr[0];
        x=arr[0];
        ans=arr[0];
        for (int i=1;i<n;i++)
        {
            if (abs(arr[i]%2) == abs(arr[i-1]%2))
            {
                ans=max(arr[i],sum);
                x=arr[i];
            }
            else if ((sum+arr[i])<arr[i])
            {
                ans=max(arr[i],sum);
                x=arr[i];
            }
            else 
            {
                sum+=arr[i];
                ans=max(sum,x);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}