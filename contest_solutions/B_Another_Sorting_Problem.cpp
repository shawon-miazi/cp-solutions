#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=INT32_MAX,mx=0,f=0,d=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i!=0 && arr[i]<arr[i-1])
            {
              m=arr[i-1]-arr[i];
              d=max(d,m);
            }
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i]<arr[i-1])
            {
                arr[i]+=d;
            }
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i]<arr[i-1])
            f=1;
        }
        if (f)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}