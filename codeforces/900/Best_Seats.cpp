#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = INT64_MAX;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {

            if ((arr[i] + arr[i + 1]) < sum)
                sum = arr[i] + arr[i + 1];
        }
        cout << sum << endl;
    }
    return 0;
}