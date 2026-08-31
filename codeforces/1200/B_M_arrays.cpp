#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, cnt = 0, mi;
        cin >> n >> m;
        map<int, int> ump;
        for (int i = 0; i < n; i++)
        {
            cin >> mi;
            ump[mi % m]++;
        }
        for (auto x : ump)
        {
            if ((x.first == 0 && x.second > 0) || (m % 2 == 0 && (x.first == (m / 2)) && x.second > 0))
            {
                cnt++;
                x.second = 0;
            }
            else
            {
                if (ump.find(m - x.first) != ump.end() && x.second > 0)
                {
                    if (x.second == ump[m - x.first])
                    {
                        x.second = 0;
                        ump[m - x.first] = 0;
                        cnt++;
                    }
                    else
                    {
                        if (x.second > ump[m - x.first])
                        {
                            x.second -= (ump[m - x.first] + 1);
                            ump[m - x.first] = 0;
                            cnt++;
                        }
                        else
                        {
                            ump[m - x.first] -= (x.second + 1);
                            x.second = 0;
                            cnt++;
                        }
                    }
                    cnt += (x.second + ump[m - x.first]);
                    x.second = 0;
                    ump[m - x.first] = 0;
                }
                else 
                {
                    cnt+=x.second;
                    x.second=0;
                }
            }
        }
        cout << cnt << endl;
    }
}