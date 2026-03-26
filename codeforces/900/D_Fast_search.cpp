#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int t;
    cin>>t;
    while(t--)
    {
        int l=-1,r=n,m;
        int ll,lr;
        int a,b;
        cin>>a>>b;
        while (r>l+1)
        {
            m=(l+r)/2;
            if (arr[m]<a)
            {
                l=m;
            }
            else 
            {
                r=m;
            }
        }
        ll=r+1;
        l=-1;
        r=n;
        while (r>l+1)
        {
            m=(l+r)/2;
            if (arr[m]<=b)
            {
                l=m;
            }
            else 
            {
                r=m;
            }
        }
        lr=l+1;
        cout<<(lr-ll)+1<<" ";
    }
    return 0;
}