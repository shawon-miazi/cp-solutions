#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x=0,sum=0,f=1;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for (int i=0;i<n;i++)
        {
            x=sum-arr[i];
            if ((x&arr[i])!=0)
            {
                f=0;
                break;
            }
        }
        if (f)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
}