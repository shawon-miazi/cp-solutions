#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,flag=1,dif=1000000000,temp=0,cnt=0,flagz=1,difz=-1000000000;
        cin>>n;
        int arr[n],ar[n];
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for (int j=0;j<n;j++)
        {
            cin>>ar[j];
            if (ar[j] != 0)
            temp=arr[j]-ar[j];
            if (cnt==0 && ar[j]!=0)
            {
                dif=temp;
                cnt++;
            }
            
            if (ar[j] !=0 && dif != temp)
            flag=0;
            if (ar[j] > arr[j])
            flagz=0;
            if (ar[j]==0 && (arr[j]-ar[j]>difz))
            difz=arr[j]-ar[j];
        }
        
        if (flag==1 && flagz!=0 && dif>=difz)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}