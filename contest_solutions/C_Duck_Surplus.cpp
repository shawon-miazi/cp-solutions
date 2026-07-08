#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0,f=1;
        cin>>n;
        vector<long long int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i-1]>arr[i])
            {
                arr[i]+=arr[i-1];
            }
        }
        cout<<arr[n-1]<<endl;
    }
}