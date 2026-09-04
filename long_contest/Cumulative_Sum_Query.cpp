#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>n;
    vector<int>v(n),psum(n+1,0);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        psum[i+1]=psum[i]+v[i];
    }
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        long long ans=psum[r+1]-psum[l];
        cout<<ans<<endl;
    }
}