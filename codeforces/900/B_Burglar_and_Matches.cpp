#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,num=0,v;
    cin>>n>>m;
    vector<vector<int>>arr(m,vector<int>(2));
    for (int i=0;i<m;i++)
    {
        for (int j=1;j>=0;j--)
        {
            cin>>arr[i][j];
        }
    }
    sort(arr.begin(),arr.end(),greater<vector<int>>());
    // for (int i=0;i<m;i++)
    // {
    //     for (int j=0;j<2;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    for (int i=0;i<m;i++)
    {
        if (n<1)
        {
            break;
        }
        else
        {
            if (n>=arr[i][1])
            v=arr[i][1];
            else 
            v=n;
            num+=(arr[i][0] *v);
            n-=v;
        }
    }
    cout<<num<<endl;
    return 0;
}