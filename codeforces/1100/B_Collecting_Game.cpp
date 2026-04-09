#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x=0, cnt = 0, presum = 0, sum;
        cin >> n;
        vector<long long > ar(n), prfsum(n,0);
        pair<int, int> arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            x += arr[i].first;
            prfsum[i] += x;
            // cout<<x<<" ";
        }
        // cout<<"-";
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                ar[arr[i].second] = i;
            }
            else
            {
                if (prfsum[i] >= arr[i + 1].first)
                    ar[arr[i].second] = ar[arr[i + 1].second];
                else
                    ar[arr[i].second] = i;
            }
        }
        for (int i = 0; i < n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
}