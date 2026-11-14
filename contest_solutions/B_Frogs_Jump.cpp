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
    int n=2,m, cnt = 0,c0=0,c1=0;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n - 1; i += 2)
    {
        int c0 = 0, c1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == 'f')
                c0++;
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i + 1] == 'f')
                c1++;
        }
        cout<<c0<<" "<<c1<<" ";
        cnt += abs(c0 - c1);
    }

    if (n % 2)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i][n - 1] == 'f')
                cnt++;
        }
    }
    cout<<cnt<<endl;
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