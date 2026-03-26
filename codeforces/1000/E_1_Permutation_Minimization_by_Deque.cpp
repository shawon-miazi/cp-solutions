#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,ma=0,a=0,min=INT32_MAX,f=0;
        cin>>n;
        vector<int>arr(n,0),ar(n,0);
        for (int i=0,l=n-1,k=0;i<n;i++)
        {
            cin>>a;
            if (a<min)
            {
                arr[l]=a;
                l--;
                min=a;
            }
            else 
            {
                ar[k]=a;
                k++;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]!=0)
            cout<<arr[i]<<" ";
        }
        for (int i=0;i<n;i++)
        {
            if (ar[i]!=0)
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}