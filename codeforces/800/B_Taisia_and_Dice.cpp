#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int w=0;w<t;w++)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int arr[n];
        arr[0]=s-r;
        int a=r/(n-1),b=r%(n-1);
        if (r%(n-1)==0)
        {
            for (int i=1;i<n;i++)
            {
                arr[i]=a;
            }
        }
        else if (r%(n-1)!=0)
        {
            for (int i=1;i<n;i++)
            {
                arr[i]=a;
            }
            for (int i=1,j=0;j<b;j++,i++)
            {
                arr[i]+=1;
            }
        }
        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}