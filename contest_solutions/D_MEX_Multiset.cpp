#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, f = 0;
        cin >> n;
        string s;
        vector<pair<int, int>> arr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            mp[arr[i].first]++;
            arr[i].second = i;
            s += "A";
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first == 0 && x == 0)
            {
                s[arr[i].second] = 'A';
                x = 1;
                f = 1;
            }
            else if (arr[i].first == 0 && x == 1)
            {
                s[arr[i].second] = 'B';
                f = 2;
            }
            else
            {
                s[arr[i].second] = 'C';
            }
        }
        if (f == 0 || f == 2)
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
            cout << "NO" << endl;
    }
}