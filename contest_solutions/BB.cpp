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
    int n;
    cin >> n;
    vector< int> arr(n), bcnt(100);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ll x = arr[i];
        string s = "";
        while (x)
        {
            if (x % 2)
                s += "1";
            else
                s += "0";
            x /= 2;
        }
        // reverse(s.begin(),s.end());
        // cout<<s[2]<<endl;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '1')
                bcnt[j]++;
        }
    }
    int f = 1,c=0;
    while (f || c<n)
    {
        f=0;
        ll val=0,p=1;
        for (int i = 0; i < 100; i++)
        {
            if (bcnt[i]>0)
            {
                val+=p;
                bcnt[i]--;
                f=1;
            }
            p*=2;
        }
        arr[c]=val;
        c++;
    }
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}