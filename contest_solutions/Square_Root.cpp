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
    string s;
    cin >> s;
    double a = 0;
    vector<int> ar;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            cnt++;
        else
        {
            if (cnt > 2)
            {
                if (cnt % 2)
                    a += ceil(cnt / 2.0);
                else
                {
                    a += (cnt / 2) - 1;
                    ar.push_back(2);
                }
            }
            else
                ar.push_back(cnt);
            cnt = 0;
        }
    }
    
    if (cnt > 2)
    {
        if (cnt % 2)
            a += ceil(cnt / 2.0);
        else
        {
            a += (cnt / 2) - 1;
            ar.push_back(2);
        }
    }
    else
        ar.push_back(cnt);
    for (int i = 0; i < ar.size(); i++)
    {
        a += sqrt(ar[i]);
    }
    cout << fixed << setprecision(10) << a << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}