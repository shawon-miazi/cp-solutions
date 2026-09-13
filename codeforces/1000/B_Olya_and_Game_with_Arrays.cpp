#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,ans=0,m=INT64_MAX,m1=INT64_MAX;
        cin>>n;
        vector<vector<long long int>>v(n);
        for (int i=0;i<n;i++){
            long long int a,x;
            cin>>a;
            while (a--)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }
        for (int i=0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for (int i=0;i<n;i++)
        {
            ans+=(v[i][1]);
            m=min(m,v[i][1]);
            m1=min(m1,v[i][0]);
        }
        ans-=m;
        ans+=m1;
        cout<<ans<<endl;
    }
}