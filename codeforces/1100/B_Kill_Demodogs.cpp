#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n, ans = 0, a = 1e9;
        cin >> n;
        a += 7;
        ans = (n * (n + 1)) % a;
        ans = (((ans * (4 * n - 1)) % a * 337) % a) % a;
        cout << ans << endl;
    }
}