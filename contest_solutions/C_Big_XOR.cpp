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
    ll n, r = 0, xr = 0, p = 0;
    cin >> n;
    p = log2(n);
    p = bigpow(2, p);
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        r = r | i;
        if (i != p)
        {
            xr = xr ^ i;
        }  
        else
        {
            xr = xr ^ (i * 2);
            arr[i]=1;
        }
            
    }
    string s = "";
    ll val = xr;
    while (val)
    {
        if (val % 2)
            s += "1";
        else
            s += "0";
        val /= 2;
    }
    int m = s.size();
    for (int i = m - 1; i > 0; i--)
    {
        if (s[i] == '0')
        {
            arr[p] = 1;
            if (s[i-1]=='0')
            s[i - 1] = '1';
            else 
            s[i-1]='0';
            s[i] = '1';
        }
        p/=2;
    }
    xr = 0;
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
        if (arr[i] == 0)
            xr = xr ^ i;
        else
            xr = xr ^ (2 * i);
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