#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,ans=1;
        cin>>n>>k;
        for (int i=0;i<k;i++)
        {
            ans*=n;
            ans=(ans%(long long int)1000000007);
        }
        cout<<ans<<endl;
    }
}