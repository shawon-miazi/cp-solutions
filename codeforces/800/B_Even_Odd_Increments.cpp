#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        long long int sum=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ca,va;
        for (int i=0;i<q;i++)
        {
            sum=0;
            cin>>ca>>va;
            if (ca==0)
            {
                for (int j=0;j<n;j++)
                {
                    if (arr[j]%2==0)
                    {
                        arr[j]+=va;
                    }
                    sum+=arr[j];
                }
            }
            else if (ca==1)
            {
                for (int j=0;j<n;j++)
                {
                    if (arr[j]%2==1)
                    {
                        arr[j]+=va;
                    }
                    sum+=arr[j];
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}