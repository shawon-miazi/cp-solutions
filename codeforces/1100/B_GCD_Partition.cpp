#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x=0,mg=0,g=0;
        cin>>n;
        vector<int>arr(n),psum(n,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            x+=arr[i];
            psum[i]=x;
        }
        for (int i=0;i<n-1;i++)
        {
            g=__gcd(psum[i],(psum[n-1]-psum[i]));
            mg=max(g,mg);
        }
        cout<<mg<<endl;
    }
}