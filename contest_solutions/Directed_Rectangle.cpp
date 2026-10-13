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
    vector<pair<char, char>> p(4);
    string s;
    for (int i = 0; i < 4; i++)
    {
        getline(cin, s);
        if (s[2] == '-')
        {
            p[i].first = s[0];
            p[i].second = s[5];
        }
        else
        {
            p[i].first = s[5];
            p[i].second = s[0];
        }
        // cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    int n;
    cin >> n;
    while (n--)
    {
        char a, b;
        cin >> a >> b;
        vector<char> l, r;
        l.push_back(a);
        for (int j = a-'A',i=0; i < 16; i++)
        {
            int m = l.size();
            for (int i = 0; i < m; i++)
            {
                if (p[j].first == l[i])
                {
                    r.push_back(p[j].second);
                    l.push_back(p[j].second);
                }
            }
            j++;
            if (j==4)
            j=0;
        }
        // for (int j = 0; j < r.size(); j++)
        // {
        //     cout << r[j] << " ";
        // }
        // cout << endl;
        int f=0;
        for (int j = 0; j < r.size(); j++)
        {
            if (r[j] == b)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}