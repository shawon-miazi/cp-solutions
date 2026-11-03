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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int t = n + m, cnt = 0, mcnt = 0;
    for (int len=1;len<=min(n,m);len++)
    {
        for (int i=0;i+len<=n;i++)
        {
            for (int j=0;j+len<=m;j++)
            {
                if (a.substr(i,len)==b.substr(j,len))
                {
                    mcnt=max(mcnt,len);
                }
            }
        }
    }
    cout << (n+m)-2*mcnt << endl;
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