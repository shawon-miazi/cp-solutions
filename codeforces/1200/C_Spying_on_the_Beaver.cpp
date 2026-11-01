#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int mx = 1'000'000;

vector<bool> isprime(mx + 1, true);

void sieve()
{
    isprime[0] = isprime[1] = false;

    for (int i = 2; 1LL * i * i <= mx; i++) // for spf/hfp use i<=mx
    {
        if (isprime[i])
        {
            for (ll j = 1LL * i * i; j <= mx; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

ll bigpow(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a);
        a = (a * a);
        n >>= 1;
    }
    return ans;
}

void solve()
{
    int n, m, f = 0, x;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0, j = 1; i < n - 1; i++, j++)
    {
        cin >> x;
        mp[x].push_back(j);
    }
    cin >> m;
    vector<ll>ar(m);
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    cout << m - 1 << " ";
    sort(ar.begin(),ar.end());
    for (int i=1;i<m;i++)
    cout<<ar[i]<<" ";
    cout << endl;
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