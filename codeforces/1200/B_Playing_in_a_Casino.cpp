#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, sum = 0;
        cin >> n >> m;
        vector<vector<long long int>> a(n, vector<long long int>(m));
        vector<long long int> co(n), s(n);
        for (int i = 0, j = n - 1; i < n; i++, j -= 2)
        {
            co[i] = j;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s[j] = a[j][i];
            }
            sort(s.begin(),s.end(),greater<long long int>());
            for (int j=0;j<n;j++)
            {
                sum+=(s[j]*co[j]);
            }
        }
        cout << sum << endl;
    }
}