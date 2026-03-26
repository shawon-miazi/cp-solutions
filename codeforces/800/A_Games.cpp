#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,cnt=0;
    cin>>n;
    vector<vector<int>>ar(n,vector<int>(2));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>ar[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i!=j && ar[i][0]==ar[j][1])
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}