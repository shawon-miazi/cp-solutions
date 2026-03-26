#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k,cnt=0,sum=0;
        cin>>n>>m>>k;
        vector<int>arr(n),ar(m);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<m;i++)
        {
            cin>>ar[i];
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                sum=arr[i]+ar[j];
                if (sum<=k)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}