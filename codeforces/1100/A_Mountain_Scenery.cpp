#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,k,cnt=0,n;
    cin>>a>>k;
    n=((a-1)*2)+3;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=1;i<n;i+=2)
    {
        if (i%2==1 && arr[i]-arr[i-1]>1 && arr[i]-arr[i+1]>1)
        {
            arr[i]-=1;
            cnt++;
        }
        if (cnt==k)
        break;
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}