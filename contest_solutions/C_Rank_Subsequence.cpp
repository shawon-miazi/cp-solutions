#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> l(n), u(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i].first >> l[i].second;
            cin >> u[i].first >> u[i].second;
        }
        for (int len = n; len >= 0; len--)
        {
            int pos = 1;
            for (int i = 0; i < n && pos <= len; i++)
            {
                if (!(pos >= l[i].first && pos <= l[i].second) && !(len - pos + 1 >= u[i].first && len - pos + 1 <= u[i].second))
                {
                    pos++;
                }
            }
            if (pos > len)
            {
                cout << len << endl;
                break;
            }
        }
    }
}