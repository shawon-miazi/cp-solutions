#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, sum = 0, x = 0, pos = -1, cur = 0, me = 0;
        map<int, int> mp;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (sum != x)
            {
                mp.insert({sum, i});
                x = sum;
            }
            if (sum == s)
                pos = i;
        }
        if (sum < s)
            cout << -1 << endl;
        else if (sum == s)
            cout << 0 << endl;
        else
        {
            sum = 0;
            for (int i = 0, j = 0, val = 0; i < n; i++)
            {
                sum += arr[i];
                if (sum >= s)
                {
                    if (sum > s)
                    {
                        val++;
                        j = mp[val]+1;
                        sum = s;
                    }
                    cur = i - j + 1;
                    me = max(me, cur);
                }
            }
            cout << n - me << endl;
        }
    }
}