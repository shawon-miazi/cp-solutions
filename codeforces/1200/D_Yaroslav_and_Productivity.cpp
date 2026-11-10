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
    ll n, m, sum, f = 0, s = 0;
    cin >> n >> m;
    vector<ll> arr(n), psum(n, 0), id(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            psum[i] = arr[i];
        else
            psum[i] = arr[i] + psum[i - 1];
    }
    sum = psum[n - 1];

    for (int i = 0; i < m; i++)
        cin >> id[i];

    sort(id.begin(), id.end());

    if (psum[id[0] - 1] < s)
        f = 1;
    ll p=0,q=id[0]-1,ps=psum[id[0]-1];
    for (int i = 0, j = 0; i < n ; i++)
    {
        if (i <= q)
        {
            if (f)
                s -= arr[i];
            else
                s += arr[i];
            if (i == q)
            {
                if (j+1<m)
                {
                    p=q;
                    j++;
                    q=id[j]-1;
                }
                if (psum[q] < psum[p])
                {
                    f = 1;
                }
                else
                    f = 0;
            }
        }
        else 
        {
            psum[i]=arr[i]+psum[i-1];
            s+=arr[i];
        }
    }
    cout << max(sum, s) << endl;
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