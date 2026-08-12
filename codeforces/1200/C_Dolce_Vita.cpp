#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, d = 0, ans = 0, sum = 0, pos = -1;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if ((sum + v[i]) <= x)
            {
                sum += v[i];
                pos = i;
            }
            else
                break;
        }
        if (pos == -1)
            cout << 0 << endl;
        else
        {
            while (pos != -1)
            {
                ans+=floor((x-sum)/(pos+1))+1;
                sum -= v[pos];
                pos--;
            }
            cout << ans << endl;
        }
    }
}