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
    ll n, cnt = 0;
    cin >> n;
    vector<ll> ans;
    for (ll i = 0, j = 1; i < 1e7 && (((j * j) + n) <= INF); i++, j++)
    {
        ll b = (j * j) + n, a = sqrt(b);
        if ((a * a) == b)
        {
            cnt++;
            ans.push_back(a);
        }
    }
    cout << cnt << endl;
    for (int i=0;i<cnt;i++)
    {
        if (i!=cnt-1)
        cout<<ans[i]<<" ";
        else 
        cout<<ans[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}