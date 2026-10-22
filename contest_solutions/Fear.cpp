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
    ll t,a=0,b=0,ca=0,cb=0,pa=-1,pb=-1;
    cin>>t;
    vector<int>ar(t),br(t);
    map<int,int>ma,mb;
    for (int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        ar[i]=x;
        br[i]=y;
    }
    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());
    if (t%2==0)
    t--;
    cout<<ar[floor(t/2.0)]<<" "<<br[floor(t/2.0)]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}