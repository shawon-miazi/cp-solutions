#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,mp,mi=INT32_MAX,mip;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]>m)
        {
            m=max(arr[i],m);
            mp=i;
        }
        if (arr[i]<=mi)
        {
            mi=min(arr[i],mi);
            mip=i;
        }
    }
    int val=0;
    if (mip<mp)
    val-=1;
    val+=(mp)+(n-1-mip);
    cout<<val<<endl;
}