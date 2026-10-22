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
    string s, x = "";
    cin >> s;
    x += s[5];
    x += s[6];
    int a = stoi(x);
    x = "";
    x += s[8];
    x += s[9];
    int b = stoi(x);
    int days = abs(9 - a) * 28 + (28 - b + 1) + 21+1;
    if (a > 9)
        cout << "TOO LATE" << endl;
    else if (a<=9 && days>=35)
    cout<<"GOOD"<<endl;
    else
    cout << "TOO LATE" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}