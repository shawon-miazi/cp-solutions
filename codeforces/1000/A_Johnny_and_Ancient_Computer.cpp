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
    ll a, b,cnt=0;
    cin >> a >> b;
    if (a>b)
    swap(a,b);
    while ((a * 2) <= b || (a * 4) <= b || (a * 8) <= b)
    {
        cnt++;
        if ((a * 8) <= b)
        {
            a*=8;
        }
        else if ((a * 4) <= b)
        {
            a*=4;
        }
        else 
        a*=2;
    }
    if (a==b)
    cout<<cnt<<endl;
    else 
    cout<<-1<<endl;
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