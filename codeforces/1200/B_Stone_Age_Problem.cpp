#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q, sum = 0, f = 0;
    cin >> n >> q;
    vector<long long int> arr(n), c(n, 0), pos;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    while (q--)
    {
        long long int t, x, i = -1, ax;
        cin >> t;
        if (t % 2)
        {
            cin >> i >> x;
            if (f == 0)
            {
                sum -= arr[i - 1];
                arr[i - 1] = x;
                sum += x;
            }
            else
            {
                if (c[i - 1] == 0)
                {
                    sum -= ax;
                    c[i - 1] = 1;
                    pos.push_back(i - 1);
                    arr[i - 1] = x;
                }
                else
                {
                    sum -= arr[i - 1];
                }
                sum += x;
                arr[i - 1] = x;
            }
            cout << sum << endl;
        }
        else
        {
            cin >> ax;
            sum = (ax * n);
            f = 1;
            if (pos.size())
            {
                for (int i = 0; i < pos.size(); i++)
                {
                    c[pos[i]] = 0;
                }
                pos.clear();
            }

            cout << sum << endl;
        }
    }
}