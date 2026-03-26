#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,flag=0,max=0,pos=0;
        cin>>n;
        int arr[n];
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
            if (arr[j]>max)
            max=arr[j];
        }
        for (int j=0;j<n;j++)
        {
            if (j==0 && arr[j+1]!=max && arr[j]==max)
            pos=1;
            else if (j==n-1 && arr[j-1]!=max && arr[j]==max)
            pos=n;
            if ((j>0 && j<n-1) && arr[j]==max && (arr[j-1]!=max || arr[j+1]!=max))
            pos=j+1;
            if (arr[j]!=max)
            flag=1;
        }
        if (flag==0)
        cout<<-1<<endl;
        else
        cout<<pos<<endl;
    }
    return 0;
}