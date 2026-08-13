#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, num = 0, a;
        cin >> n;
        vector<pair<long long int, long long int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i].first * arr[j].first) <= (n *2))
                {
                    if ((arr[i].first * arr[j].first) == (arr[i].second + arr[j].second))
                        num++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << num << endl;
    }
}