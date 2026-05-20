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
        for (int i=0,k=n-1;i<l1;i++,k--)
        {
            for (int j=0,l=n-1;j<n;j++,l--)
            {
                if (arr[i][j]!= arr[k][l])
                cnt++;
            }
        }
        if (n%2==1)
        {
            l1=n/2;
            for (int i=0,j=n-1;i<(n/2);i++,j--)
            {
                if (arr[l1][j]!=arr[l1][i])
                cnt++;
            }
        }
        int a=0;
        int f=0;
        if (n%2==1 && cnt<=k)
        f=1;
        if (k>=cnt)
        a=k-cnt;
        if (cnt==k ||((cnt<=k)&&(n%2==0)&& a%2==0) || f==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}