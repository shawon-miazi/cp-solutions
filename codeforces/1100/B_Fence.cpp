#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,pos=1,min=INT32_MAX,sum=0;
    cin>>n>>k;
    vector<int>arr(n),pre(n+1,0);
    for (int i=0,j=1;i<n;i++,j++)
    {
        cin>>arr[i];
        sum+=arr[i];
        pre[j]=sum;
    }
    for (int i=1;i<=n-k+1;i++)
    {
        sum=pre[i+k-1]-pre[i-1];
        if (sum<min)
        {
            min=sum;
            pos=i;
        }
    }
    cout<<pos<<endl;
}