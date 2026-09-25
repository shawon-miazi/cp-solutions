#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,sum=0,pos=0;
    cin>>n>>t;
    vector<long long int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (long long int l=0,r=0;r<n;r++)
    {
        sum+=arr[r];
        if (sum<=t)
        {
            pos=max((r-l+1),pos);
        }
        else 
        {
            while (sum>t)
            {
                sum-=arr[l];
                l++;
            }
        }
    }
    cout<<pos<<endl;
}