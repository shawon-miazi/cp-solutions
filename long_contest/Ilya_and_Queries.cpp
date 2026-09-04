#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int t, n = s.size();
    cin >> t;
    vector<int> p(n, 0);
    for (int i = 0, j = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            j++;
        }
        p[i + 1] = j;
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << p[r-1] - p[l-1] << endl;
    }
}