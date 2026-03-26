#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    double num=0,x,y;
    vector<vector<int>> arr(n,vector<int>(2));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i=1;i<n;i++)
    {
        x=abs(arr[i][0]-arr[i-1][0]);
        y=abs(arr[i][1]-arr[i-1][1]);
        num+=sqrt(pow(x,2)+pow(y,2));
    }
    num=(num*k)/50;
    cout<<fixed<<setprecision(9)<<num<<endl;
    return 0;
}