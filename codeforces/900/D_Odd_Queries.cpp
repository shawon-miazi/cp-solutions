#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int j=0;j<t;j++)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        long long int sum=0;
        vector<long long int>psum(n,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            psum[i]=sum;
        }
        int l,r,k;
        for (int i=0;i<q;i++)
        {
            cin>>l>>r>>k;
            long long int temp,nsum;
            if (l-2>=0)
            temp=psum[r-1]-psum[l-2];
            else 
            temp=psum[r-1];
            nsum=sum-temp+(k*(r-l+1));
            if (nsum&1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}