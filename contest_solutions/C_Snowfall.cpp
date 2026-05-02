#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j=0,p1=0,p2=0,f=0;
        cin>>n;
        vector<int>arr(n),ar(n,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0,j=0,l=n-1;i<n;i++)
        {
            if (arr[i]%6==0)
            {
                ar[j]=arr[i];
                j++;
                arr[i]=0;
            }
            else if (arr[i]%3==0)
            {
                ar[l]=arr[i];
                l--;
                arr[i]=0;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (ar[i]==0)
            {
                p1=i;
                break;
            }
        }
        for (int i=0,j=p1;i<n;i++)
        {
            if (arr[i]!=0 && arr[i]%2==0)
            {
                ar[j]=arr[i];
                j++;
                arr[i]=0;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (ar[i]==0)
            {
                p1=i;
                break;
            }
        }
        for (int i=0,j=p1;i<n;i++)
        {
            if (arr[i]!=0)
            {
                ar[j]=arr[i];
                j++;
            }
        }
        for (int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}