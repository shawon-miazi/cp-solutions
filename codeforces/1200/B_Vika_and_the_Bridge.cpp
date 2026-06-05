#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>col[k+1];
        for (int i=1;i<=k;i++)
        {
            col[i].push_back(0);
        }
        for (int i=0;i<n;i++)
        {
            col[arr[i]].push_back(i+1);
        }
        for (int i=1;i<=k;i++)
        {
            col[i].push_back(n+1);
        }
        priority_queue<int>jump[k+1];
        int ans=INT_MAX;
        for (int i=1;i<=k;i++)
        {
            for (int j=0;j<col[i].size()-1;j++)
            {
                jump[i].push(col[i][j+1]-col[i][j]-1);
            }
            int max_v=jump[i].top();
            jump[i].pop();
            if (max_v%2==0)
            {
                jump[i].push((max_v/2));
                jump[i].push((max_v/2)-1);
            }
            else 
            {
                jump[i].push((max_v/2));
                jump[i].push((max_v/2));
            }
            ans=min(ans,jump[i].top());
        }
        cout<<ans<<endl;
    }
}