#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        int arr[n];
        arr[0]=1;
        for (int j=1,k=n;j<n;j++,k--)
        {
            arr[j]=k;
        }
        for (int k=0;k<n;k++)
        cout<<arr[k]<<" ";
        cout<<endl;
    }
    return 0;
}