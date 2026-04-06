#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,maxv=0,epv=0,x=0,tempv=0;
        cin>>n>>k;
        vector<int>arr(n),ar(n),fre(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            x+=arr[i];
            fre[i]=x;
        }
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if (ar[i]>maxv)
            maxv=ar[i];
        }
        if (k<n)
        epv=fre[k-1];
        else 
        {
            epv=fre[n-1]+(maxv*(k-n));
        }
        x=0;
        // for(int i=0;i<n;i++)
        // cout<<fre[i]<<" ";
        // cout<<endl;
        for (int i=0;i<n && i<k;i++)
        {
            if (ar[i]>x)
            x=ar[i];
            tempv=fre[i];
            // cout<<tempv<<" ";
            maxv=tempv+((k-i-1)*x);
            if (((n-i-1)>=0) && (maxv>epv))
            {
                epv=(tempv+((k-i-1)*x));
            }
        }
        cout<<epv<<endl;
    }
}