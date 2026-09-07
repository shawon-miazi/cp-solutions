#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, cnt = 1, f = 0;
        cin >> n;
        vector<long long int> v(n);
        vector<pair<int, int>> a;
        for (int i = 0, x; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
                x = v[i];
            else
            {
                if (v[i] == x)
                    cnt++;
                else
                {
                    a.push_back({cnt, x});
                    cnt = 1;
                    x = v[i];
                }
            }
            if (i == n - 1)
                a.push_back({cnt, v[n - 1]});
        }
        cnt = 0;
        for (int i = 0, l = a.size(); i < l; i++)
        {
            if (i < l - 1 && f == 0 && a[i].first > 1 && (i + 2 >= l || a[i + 2].second != a[i].second))
                f = 1;
            if (i > 0 && f == 0 && a[i].first > 1 && (i - 2 < 0 || a[i - 2].second != a[i].second))
                f = 1;
            if (i < l - 1 && a[i].first > 1 && a[i + 1].first > 1)
                f = 2;
        }
        cnt = a.size();
        if (f == 1)
            cnt += 1;
        else if (f == 2)
            cnt += 2;
        cout << cnt << endl;
    }
}