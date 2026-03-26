#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,cnt=0;
    cin>>k;
    vector<int>arr(12);
    for (int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    for (int i=11;i>=0 && sum<k;i--)
    {
        
        sum+=arr[i];
        cnt++;
    }
    if (sum<k)
    cout<<-1<<endl;
    else
    cout<<cnt<<endl;
}