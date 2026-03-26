#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,flag=0,sum=0;
        cin>>n;
        int arr[n],pos=-1;
        for (int j=0;j<n;j++)
        {
            
            cin>>arr[j];
            if (j>0 && arr[j]==-1 && arr[j-1]==-1 && flag==0)
            {
                arr[j]=1;
                arr[j-1]=1;
                flag=1;
            }
            if (arr[j]==-1)
            pos=j;
        }
        if (pos==-1 && flag==0)
        {
            arr[0]*=-1;
            arr[1]*=-1;
        }
        else if (flag==0 && pos != -1)
        {
            arr[pos]*=-1;
            if (pos>0)
            arr[pos-1]*=-1;
            else 
            arr[pos+1]*=-1;
        }
        for (int j=0;j<n;j++)
        {
            sum+=arr[j];
        }
        cout<<sum<<endl;

    }
    return 0;
}