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

void solve()
{
    ll n, a = 0, b = 0, j = 3,c=2;
    cin >> n;
    if (n%2==0)
    n /= 2;
    else {
        while (j*j<=n)
        {
            if (n%j==0)
            {
                n/=j;
                c=j;
                j++;
                break;
            }
            j++;
        }
    }
    while (j * j <= n)
    {
        if (n % j == 0 && j != (n / j))
        {
            a = j;
            b = n / j;
            break;
        }
        j++;
    }
    if (a && b)
    {
        cout << "YES" << endl;
        cout << c << " " << a << " " << b << endl;
    }
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