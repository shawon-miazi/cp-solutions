#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=INT32_MAX,mx=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(arr[i],mx);
            m=min(m,arr[i]);
        }
        cout<<mx-m+1<<endl;
    }
}