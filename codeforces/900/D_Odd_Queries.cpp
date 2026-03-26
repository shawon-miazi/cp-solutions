#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int j=0;j<t;j++)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        long long int sum;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l,r,k;
        for (int i=0;i<q;i++)
        {
            cin>>l>>r>>k;
            sum=0;
            for (int o=0;o<n;o++)
            {
                if (o>=l-1 && o<=r-1)
                {
                    sum+=k;
                }
                else 
                sum+=arr[o];
                // cout<<sum<<" ";
            }
            if (sum%2==1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}