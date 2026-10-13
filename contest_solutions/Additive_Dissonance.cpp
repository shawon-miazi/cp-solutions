#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int mx=0;
        for (auto x: mp)
        {
            mx=max(mx,(int)ceil(x.second/2.0));
        }
        cout<<mx<<endl;
    }
}