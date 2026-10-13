#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,m,ans=0,mv=INT64_MIN,pos=-1,ma=INT64_MIN,v;
        cin>>n>>m;
        vector<long long int >arr(n);
        map<int,int>mp;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for (int i=n-1;i>m-2;i--)
        {
            mv=max(mv,arr[i]);
            ans=m*mv;
            mp[arr[i]]--;
            int j=0;
            for (auto a:mp)
            {
                if (a.second>0 && j<=(m-2))
                {
                    ans-=a.first;
                    j++;
                }
                else if(a.second>0)
                {
                    v=a.first;
                }
            }
            ma=max(ans,ma);
        }
        cout<<ma<<endl;
    }
}