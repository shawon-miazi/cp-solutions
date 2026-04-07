#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,sum=0,sum2=0;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum2=(n*k);
        if (sum%2==1 || sum2%2==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}