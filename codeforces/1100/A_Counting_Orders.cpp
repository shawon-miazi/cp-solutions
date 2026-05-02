#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,mv=1e9+7,res=1,temp,cnt;
        cin>>n;
        vector<long long int>a(n),b(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for (int i=0;i<n;i++)
        {
            temp=upper_bound(a.begin(),a.end(),b[i])-a.begin();
            cnt=a.size()-temp;
            res=res*max(cnt-i,0LL)%mv;
        }
        cout<<res<<endl;
    }
}