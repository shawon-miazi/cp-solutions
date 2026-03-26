#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,g=0;
    cin>>n;
    vector<vector<int>> ar(n,vector<int>(2));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<2;j++)
        {
           cin>>ar[i][j];
           
        }
        if (ar[i][0]!=ar[i][1])
        f=1;
        if (i!=0 && (ar[i][0]>ar[i-1][0] || ar[i][1]>ar[i-1][1]))
        g=1;
    }
    if (f==1)
    cout<<"rated"<<endl;
    else if (g==1)
    cout<<"unrated"<<endl;
    else 
    cout<<"maybe"<<endl;
    return 0;
}