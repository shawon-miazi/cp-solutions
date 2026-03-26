#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        int cnt=1,num=1,val=0,ans=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort (arr.begin(),arr.end());
        for (int i=1;i<n;i++)
        {
            if (arr[i]==arr[i-1])
            {
                cnt++;
            }
            if (cnt>num)
            num=cnt;
            else if(arr[i]!=arr[i-1])
            {
                cnt=0;
            }
        }
        if (n==num)
        cout<<0<<endl;
        else 
        {
            val=n-num;
            if (val%num==0)
            cnt=val/num;
            else 
            cnt=(val/num)+1;
            ans=cnt*2;
            cout<<ans<<endl;
        }
    }
    return 0;
}