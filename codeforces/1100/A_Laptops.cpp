#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    pair<int,int>arr[n];
    vector<int>cmp(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        cin>>arr[i].second;
        cmp[i]=arr[i].second;
    }
    sort(arr,arr+n);
    sort(cmp.begin(),cmp.end());
    int f=0;
    for (int i=n-1;i>=0;i--)
    {
        if (arr[i].second<cmp[i])
        {
            
            f=1;
            break;
        }
    }
    if (f)
    cout<<"Happy Alex"<<endl;
    else 
    cout<<"Poor Alex"<<endl;
    
    return 0;
}