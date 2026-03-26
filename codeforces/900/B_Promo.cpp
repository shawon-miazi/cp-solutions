#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector <int > arr(n);
    long long int presum[n]={0};
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<n;i++)
    {
        if (i!=0)
        presum[i]+=arr[i]+presum[i-1];
        else 
        presum[i]+=arr[i];
        
    }
    long long int sum;
    for (int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        if (n-x-1 >=0)
        sum=presum[n-x+y-1]-presum[n-x-1];
        else 
        sum=presum[n-x+y-1];
        cout<<sum<<endl;
    }
    return 0;
}