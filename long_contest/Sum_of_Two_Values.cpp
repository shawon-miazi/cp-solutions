#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum,f=0,a=-1,b=-1;
    cin>>n>>x;
    vector<pair<int,int>>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    int l=0,r=n-1;
    while (l<r)
    {
        sum=arr[l].first+arr[r].first;
        if (sum>x)
        {
            r--;
        }
        else if (sum<x)
        {
            l++;
        }
        else 
        {
            a=arr[l].second;
            b=arr[r].second;
            f=1;
            break;
        }
    }
    if (f)
    cout<<a<<" "<<b<<endl;
    else 
    cout<<"IMPOSSIBLE"<<endl;
}