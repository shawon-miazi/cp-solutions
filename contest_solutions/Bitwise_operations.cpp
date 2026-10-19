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
    unsigned long long n, na = 0, nb = 0, f = 0, l, cnt = 0;
    cin >> n;
    l = n;
    string a = "", b = "";
    while (n)
    {
        if (n % 2)
        {
            if (f)
            {
                a += "1";
                b += "0";
                f = 0;
            }
            else
            {
                a += "0";
                b += "1";
                f = 1;
            }
            cnt++;
        }
        else
        {
            if (cnt < 2)
            {
                a += "1";
                b += "1";
                cnt++;
            }
            else
            {
                a += "0";
                b += "0";
            }
        }
        n /= 2;
    }
    unsigned long long c = 1;
    if (cnt < 2)
    {
        a += "1";
        b += "1";
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
            na += c;
        if (b[i] == '1')
            nb += c;
        c *= 2;
    }
    if (na > 0 && nb > 0)
    {
        cout << "YES" << endl;
        cout << na << " " << nb << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}