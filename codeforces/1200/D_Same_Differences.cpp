#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,ans=0;
        cin>>n;
        unordered_map<long long int,long long int>ump;
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            a=i+1-a;
            ump[a]++;
        }
        for (auto a: ump)
        {
            ans+=(a.second*(a.second-1))/(long long int)2;
        }
        cout<<ans<<endl;
    }
}