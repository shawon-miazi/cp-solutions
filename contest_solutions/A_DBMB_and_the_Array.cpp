#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,s,x,sum=0,d=0;
        cin>>n>>s>>x;
        vector <int >arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum>s)
        cout<<"NO"<<endl;
        else if (sum==s)
        cout<<"YES"<<endl;
        else 
        {
            d=sum-s;
            if (d%x==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}