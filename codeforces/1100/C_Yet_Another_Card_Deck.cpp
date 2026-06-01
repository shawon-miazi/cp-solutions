#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int>arr(n),t(m),d;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<m;i++)
    {
        cin>>t[i];
    }
    reverse(arr.begin(),arr.end());
    for (int i=0;i<m;i++)
    {
        for (int j=n-1;j>=0;j--)
        {
            if (arr[j]==t[i])
            {
                a=n-j;
                d.push_back(a);
                a=arr[j];
                arr.erase(arr.begin()+j);
                arr.push_back(a);
                break;
            }
        }
    }
    for (int i=0;i<m;i++)
    cout<<d[i]<<" ";
    cout<<endl;
}