#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,q,x=0,a=0;
        cin>>n>>q;
        vector<long long int>arr(n),ar(q),psum(31,0),fre(31,0),dis;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<q;i++)
        {
            cin>>ar[i];
        }
        x=31;
        for (int i=0;i<q;i++)
        {
            if (ar[i]<x)
            {
                x=ar[i];
                a=(long long int )pow(2,ar[i]);
                for (int j=0;j<n;j++)
                {
                    if ((arr[j]%a)==0)
                    arr[j]+=a/2;
                }
            }
        }
        for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}