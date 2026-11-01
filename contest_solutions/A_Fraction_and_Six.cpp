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
    int n, m, c = 0,f=1;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    map<int ,int> mp,mpb;
    for (int i = 0; i < n; i++)
    {
        mp[a[i] - 'a']++;
        if (mp[a[i] - 'a'] == 1)
            c++;
    }
    for (int i=0;i<m;i++){
        mpb[b[i]-'a']++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp.find(b[i] - 'a')!=mp.end() && mp[b[i]-'a']>0)
        {
            mp[b[i] - 'a']--;
            mpb[b[i]-'a']--;
        }
        if (mp.find(b[i]-'a')!=mp.end() && mp[b[i] - 'a'] == 0)
            c--;
    }
    c=0;
    for (auto x:mpb)
    {
        if (x.second>0)
        {
            f=0;
            break;
        }
    }
    for (auto x:mp)
    {
        if (x.second>0)
        c++;
    }
    if (c==3 && f && mp['s' - 'a'] == 1 && mp['i' - 'a'] == 1 && mp['x' - 'a'] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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