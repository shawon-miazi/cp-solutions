#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, cnt = 0, v = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0, j = n - 1; i < n; i++)
    {
        if (a[i] == 4)
            cnt++;
        else
        {
            if (a[i] + a[j] <= 4)
            {
                v=a[i];
                while (v < 4)
                {
                    v += a[j];
                    if (v<= 4)
                    {
                        j--;
                    }
                }
                cnt++;
            }
            else
            {
                cnt++;
            }
        }
        if (i >= j)
        {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}