#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,f=0;
        cin>>n>>k;
        vector<int>arr(n);
        map<long long ,bool>mp;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]=true;
        }
        for (int i=0;i<n;i++)
        {
            if (mp.find(arr[i]-k)!=mp.end())
            {
                f=1;
                break;
            }
        }
        if (f)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}