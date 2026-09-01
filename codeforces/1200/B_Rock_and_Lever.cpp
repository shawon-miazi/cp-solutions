#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,cnt=0,ans=0;
        cin>>n;
        vector<long long int>v(n);
        unordered_map<long long int,long long int>mp;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            cnt=0;
            for (int x=v[i];x>0;)
            {
                x=x>>1;
                cnt++;
            }
            mp[cnt]++;
        }
        for (auto x : mp)
        {
            if (x.second>1)
            {
                ans+=(x.second * (x.second-1))/2;
            }
        }
        cout<<ans<<endl;
    }
}