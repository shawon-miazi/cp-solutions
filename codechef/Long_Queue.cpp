#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = (arr[n - 1] / 2);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > x)
                break;
            else
                cnt++;
        }
        cout << n - cnt << endl;
    }
}