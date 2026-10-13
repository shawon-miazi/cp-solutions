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
    ll n, cnt = 0, mc = 0, m = 1;
    cin >> n;
    vector<ll> arr(n);
    vector<string> v(n);
    string a = "0";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mc = max(arr[i], mc);
    }
    for (ll l = 1; l <= mc;)
    {
        m++;
        l *= 2;
        a += "0";
    }
    for (int i = 0; i < n; i++)
    {
        ll x = arr[i];
        for (int j = m - 1, l; j >= 0; j--)
        {
            l = 1;
            if (x % 2 == 0)
                l = 0;
            a[j] = '0' + l;
            x /= 2;
        }
        v[i] = a;
        cout << v[i] << endl;
    }
    for (int i = 1; i < n; i++)
    {
        ll c=0,f=1;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j]!=v[i-1][j])
            {
                c++;
                if (c>1)
                {
                    f=0;
                    break;
                }
            }
        }
        if (f)
        cnt++;
        else
        {
            mc=max(mc,cnt);
            cnt=0;
        }
        cout<<cnt<<" ";
    }
    // cout<<cnt<<"->";
    // mc=max(mc,cnt);
    // cout<<mc<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}