#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if ((2*(2*k+1))<n)
    cout<<-1<<endl;
    else 
    { 
        ll sum=INT64_MAX;
        for (int i=0;i<=k;i++)
        {
            for (int j=i+1;j<=(i+(2*k+1)) && j<n;j++)
            {
                if (j+k>=n-1)
                sum=min(arr[i]+arr[j],sum);
                // cout<<sum<<" ";
            }
        }
        cout<<sum<<endl;
    }
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