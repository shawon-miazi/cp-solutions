#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,f=1;
        cin>>n;
        vector<long long int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int sum=arr[0];
        for (int i=1;i<n;i++)
        {
            if (arr[i]<=sum)
            {
                sum+=arr[i];
            }
            else 
            {
                f=0;
                break;
            }
        }
        if (f && arr[0]==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}