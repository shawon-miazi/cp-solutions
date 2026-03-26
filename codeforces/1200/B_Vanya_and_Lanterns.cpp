#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double max=0;
    for (int i=1;i<n;i++)
    {
        double a=(arr[i]-arr[i-1]);
        a/=2;
        if (a>max)
        max=a;
    }
    if (arr[0]!=0 && max<((double)(arr[0])))
    max=arr[0];
    if (arr[n-1]!=l && max<((double)(l-arr[n-1])))
    max=l-arr[n-1];
    cout<<fixed<<setprecision(10)<<max<<endl;
}