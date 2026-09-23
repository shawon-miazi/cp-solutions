#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x,y,a,ans=0,nx,ny;
        cin>>n>>x>>y;
        map<pair<long long int,long long int>,int>mp;
        for (int i=0;i<n;i++)
        {
            cin>>a;
            nx=(x-a%x)%x;
            ny=a%y;
            ans+=mp[{nx,ny}];
            mp[{a%x,a%y}]++;
        }
        cout<<ans<<endl;
    }
}