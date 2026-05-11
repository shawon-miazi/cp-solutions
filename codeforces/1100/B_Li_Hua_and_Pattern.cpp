#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,cnt=0,l1;
        cin>>n>>k;
        vector<vector<int>>arr(n,vector<int>(n,0));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        l1=n/2;
        if (n%2==0)
        l1=((n/2)-1);
        for (int i=0,k=n-1;i<l1;i++,k--)
        {
            for (int j=0,l=n-1;j<n;j++,l--)
            {
                if (arr[i][j]!= arr[k][l])
                cnt++;
            }
        }
        if (n%2==0)
        {
            l1=n/2;
            for (int i=l1-1,k=l1;i<l1;i++)
            {
                for (int j=0;j<n;j++)
                {
                    if (arr[i][j]!=arr[k][j])
                    cnt++;
                }
            }
        }
        if (cnt<=k)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}