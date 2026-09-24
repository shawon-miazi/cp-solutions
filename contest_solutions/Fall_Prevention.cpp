#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll n,sum=0,x=0,f=0,pos=-1;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    cin>>arr[i];
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
        if (arr[i]<x)
        {
            x=arr[i];
            pos=i;
        }
        if (sum<0)
        {
            arr[pos]=0;
            break;
        }
    }
    sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
        if (sum<0)
        f=1;
    }
    if (f)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}