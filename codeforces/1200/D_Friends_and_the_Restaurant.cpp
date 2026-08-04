#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,days=0;
        cin>>n;
        vector<int>arr(n),ar(n),a(n),pc(n,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
            a[i]=ar[i]-arr[i];
        }
        sort(a.begin(),a.end());
        for (int i=0,j=n-1;i<n;i++)
        {
            if (i>=j)
                break;
            else
            {
                while (j>i && pc[j]==1)
                {
                    j--;
                }
                if ((a[i]+a[j])>=0)
                {
                    pc[i]=1;
                    pc[j]=1;
                    j--;
                    days++;
                }
            }
        }
        cout<<days<<endl;
    }
}