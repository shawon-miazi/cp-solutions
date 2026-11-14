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

    for (int i = 2; 1LL * i * i <= mx; i++)  //for spf/hfp use i<=mx
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
    int n,f=0,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        if (f==0 && s[i]=='B')
        {
            cnt++;
        }
        else if (f==1 && s[i]=='R')
        {
            cnt++;
        }
        else if (f==1 && s[i]=='B')
        {
            f=0;
        }
        else if (f==0 && s[i]=='R')
        {
            f=1;
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