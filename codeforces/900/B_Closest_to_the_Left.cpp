#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x;
    cin>>n;
    vector<int>arr(n);
    cin>>t;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while (t--)
    {
        cin>>x;
        int l=-1,r=n,m;
        while(r>l+1)
        {
            m=(l+r)/2;
            if (arr[m]<=x)
            l=m;
            else 
            r=m;
        }
        cout<<l+1<<endl;
    }
    return 0;
}