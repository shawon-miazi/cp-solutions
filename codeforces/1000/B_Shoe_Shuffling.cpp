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
    int n, f = 1, pos = -1, c = -1;
    cin >> n;
    vector<int> arr(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i]== arr[i-1] && pos == -1)
        {
            pos = i + 1;
            c = i;
        }
        if (arr[i] == arr[i - 1])
        {
            ans[i - 1] = pos;
            pos = i;
        }
        else if (arr[i] != arr[i - 1] && pos != -1)
        {
            ans[c] = pos;
            pos = -1;
        }
        else
        {
            f = 0;
            break;
        }
    }
    if (pos!=-1)
    ans[c]=pos;
    if (f && (n>1 && arr[0]==arr[1]))
    {
        for (auto a : ans)
            cout << a << " ";
        cout<<endl;
    }
    else
        cout << -1<<endl;
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