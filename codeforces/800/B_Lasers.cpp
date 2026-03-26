#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int m,n,x,y,cnt=0;
        cin>>m>>n>>x>>y;
        int arr[m],ar[n];
        for (int j=0;j<m;j++)
        {
            cin>>arr[j];
            cnt++;
        }
        for (int j=0;j<n;j++)
        {
            cin>>ar[j];
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}