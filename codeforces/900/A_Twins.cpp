#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tsum=0,sum=0,cnt=0;
    cin>>n;
    vector<int >arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        tsum+=arr[i];
    }
    sort(arr.begin(),arr.end());  
    for(int i=n-1;i>=0;i--)
    {
        if(sum<=tsum)
        {
            sum+=arr[i];
            tsum-=arr[i];
            cnt++;
        }
        else
        break;
    }
    cout<<cnt<<endl;
    return 0;
}