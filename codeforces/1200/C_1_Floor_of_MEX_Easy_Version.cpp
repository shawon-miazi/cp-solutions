#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>ar(n+1);
    for (int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    vector<ll>diff(n+2),ans;
    for (auto i=1;i<=n;i++)
    {
        ll l=i*ar[i];
        if (l>n) continue;
        ll r= min(n-1,i*(ar[i]+1)-1);
        diff[l]++;
        diff[r+1]--;
    }
    ll c=0;
    for (ll i=0;i<n;i++)
    {
        c+=diff[i];
        if (c==0)
        {
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for (auto x:ans)
    cout<<x<<" ";
    cout<<endl;
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