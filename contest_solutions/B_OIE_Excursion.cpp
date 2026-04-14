#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,x=0,cnt=0,a=0;
        cin>>n>>m;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            if (i==0)
            x=arr[0];
            cin>>arr[i];
            if (arr[i]==x)
            cnt++;
            else if (arr[i]!=x || i==n-1)
            {
                x=arr[i];
                a=max(cnt,a);
                cnt=1;
            }
        }
        if (a<m)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}