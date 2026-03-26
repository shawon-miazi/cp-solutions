#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,a,max=INT64_MIN;
        cin>>n;
        vector<int>ar(n);
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end(),greater<int>());
        for (int i=0;i<n-1;i++)
        {
            ar[i]-=ar[i+1];
            if (max<ar[i])
            max=ar[i];
        }
        if (max<ar[n-1])
        max=ar[n-1];
        cout<<max<<endl;
    }
}