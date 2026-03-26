#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while (t--)
    {
        int x;
        cin>>x;
        int l=-1,r=n,m;
        while(r>l+1)
        {
            m=(l+r)/2;
            if (arr[m]<x)
            l=m;
            else
            r=m;
        }
        cout<<r+1<<endl;
    }
    return 0;
}