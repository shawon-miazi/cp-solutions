#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >arr(n);
    int t;
    cin>>t;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(t--)
    {
        int x;
        cin>>x;
        int l=-1;
        int r=n,m;
        while (r>l+1)
        {
            m=(l+r)/2;
            if (arr[m]<x)
            {
                l=m;
            }
            else 
            {
                r=m;
            }
        }
        if (r<n && arr[r]==x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}