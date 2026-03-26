#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, max = 0, pos, f = 0;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    while (f == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first > m)
            {
                arr[i].first -= m;
                arr.push_back({arr[i].first, arr[i].second});
                arr.erase(arr.begin() + i);
                i--;
            }
            if (arr[i].first <= m)
            {
                arr[i].first = 0;
            }
            if (i == n - 1)
            {
                pos = arr[i].second;
            }
            if (arr[i].first != 0)
            {
                f++;
            }
        }
        if (f == 1 || f == 0)
            break;
        else
            f = 0;
    }
    cout << pos << endl;
    return 0;
}