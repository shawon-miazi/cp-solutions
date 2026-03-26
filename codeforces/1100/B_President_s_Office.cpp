#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a = -1, b = -1, c = -1, d = -1, num = 0, i, j, f = 0;
    char s, x;
    cin >> n >> m >> s;
    vector<vector<char>> st(n, vector<char>(m));
    vector<int> fre(30, 0);
    fre[s - 'A']++;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> st[i][j];
            if (st[i][j] == s && f == 0)
            {
                a = i;
                b = j;
                f = 1;
            }
            else if (st[i][j] == s && f == 1)
            {
                c = i;
                d = j;
            }
        }
    }
    if (c == -1 && d == -1)
    {
        c = a;
        d = b;
    }
    // cout << a << ' ' << b << " " << c << " " << d << endl;
    i = a - 1;
    if (i < 0)
        i = 0;

    for (; i < n && i <= c + 1; i++)
    {
        j = b - 1;
        if (j < 0)
            j = 0;
        for (; j <= d + 1 && j < m; j++)
        {
            if ((j == b - 1 || j == d + 1) && (i >= a && i <= c) && st[i][j] != '.' && st[i][j] != s && fre[st[i][j] - 'A'] == 0)
            {
                num++;
                fre[st[i][j] - 'A']++;
                x = st[i][j];
                // cout << x << " ";
            }
            else if (j != b - 1 && j != d + 1 && st[i][j] != '.' && st[i][j] != s && fre[st[i][j] - 'A'] == 0)
            {
                num++;
                fre[st[i][j] - 'A']++;
                x = st[i][j];
                // cout << x << " ";
            }
        }
    }
    cout << num << endl;
    return 0;
}