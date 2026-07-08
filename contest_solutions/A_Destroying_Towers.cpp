#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i]>arr[i-1])
            {
                arr[i]=arr[i-1];
            }
        }
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
}