#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q, an = 0;
        cin >> n >> q;
        vector<long long int> a(n), ans(q);
        vector<pair<long long int,long long int>> k(q);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        for (int i = 0, j = 0; i < q; i++)
        {
            while (k[i].first >= a[j] && j < n)
            {
                an += a[j];
                j++;
            }
            ans[k[i].second] = an;
        }
        for (int i = 0; i < q; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}