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
    int n,ca=0,cb=0,c=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(26,0),b(26,0);
    a[s[0]-'a']++;
    ca++;
    for (int i=1;i<n;i++)
    {
        if (b[s[i]-'a']==0)
        cb++;
        b[s[i]-'a']++;
    }
    c=ca+cb;
    for (int i=1;i<n-1;i++)
    {
        if (a[s[i]-'a']==0)
        ca++;
        a[s[i]-'a']++;
        if (b[s[i]-'a']==1)
        cb--;
        b[s[i]-'a']--;
        c=max(c,ca+cb);
    }
    cout<<c<<endl;
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