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
        int arr[n],flag=0,flagz=0,cnt=0,num=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]!=0)
            flag=1;
        }
        for (int i=1;i<=n;i++)
        {
            if (arr[i]!=0 && arr[i-1]==0) 
            {
                num++;
            }
        }
        if (flag==0)
        cout<<0<<endl;
        else if (flag==1 && num<2)
        cout<<1<<endl;
        else 
        cout<<2<<endl; 
    }
    return 0;
}