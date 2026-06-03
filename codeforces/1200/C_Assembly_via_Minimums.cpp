#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, cnt = 0, y = INT32_MIN,c;
        cin >> n;
        int m = ((n * (n - 1)) / 2), num = 0;
        vector<int> b(m), a;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            y = max(b[i], y);
        }
        sort(b.begin(), b.end());
        x = b[0];
        c=x;
        for (int i = 0, j = 0, k = n - 1; i < n;)
        {
            cnt = 0;
            if (j < m)
            {
                for (; j < m; j++)
                {
                    if (b[j] == x)
                    {
                        cnt++;
                    }
                    else
                    {
                        x = b[j];
                        break;
                    }
                }
                while (cnt > 0)
                {
                    cnt -= k;
                    k--;
                    a.push_back(c);
                    i++;
                }
                c=x;
            }
            else 
            {
                a.push_back(y);
                i++;
            }
        }
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}