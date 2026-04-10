#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x=0,dif=0,maxdif=0,mx=0,mn=INT32_MAX,a=0,b;
        cin>>n;
        vector<long long int>arr(n),div,presum(n,0);
        div.push_back(1);
        for (int i=2;i*i<=n;i++)
        {
            if (n%i==0)
            {
                div.push_back(i);
                if (i!=(n/i))
                div.push_back(n/i);
            }
        }
        // for (int i=0;i<div.size();i++)
        // cout<<div[i]<<' ';
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            x+=arr[i];
            presum[i]=x;
        }
        for (int i=0,j=div.size();i<j;i++)
        {
            mn=INT64_MAX;
            mx=0;
            for (int k=div[i],l=div[i]-1;l<n;l+=k)
            {
                long long sum;
                if (l - k >= 0)
                    sum = presum[l] - presum[l - k];
                else
                    sum = presum[l];

                mn=min(mn,sum);
                mx=max(mx,sum);
            }
            // cout<<endl;
            dif = abs(mx-mn);
            maxdif=max(dif,maxdif);
        }
        cout<<maxdif<<endl;
    }
}