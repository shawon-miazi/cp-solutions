#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, minp = 0, maxp = 0, min = 0, max = 0;
        cin >> n;
        vector<int> arr(n), ar(n), a(n);
        for (int i = 0, j = n; i < n; i++, j--)
        {
            cin >> arr[i];
            a[i] = arr[i];
            ar[i] = j;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < ar[i])
            {
                minp = i;
                min = arr[i];
                break;
            }
        }
        if (min != 0)
        {
            for (int i = n - 1; i > minp; i--)
            {
                if (min < arr[i] && f == 0)
                {
                    maxp = i;
                    max = arr[i];
                    f = 1;
                }
                else if (f == 1 && arr[i] > max)
                {
                    maxp = i;
                    max = arr[i];
                }
            }
        }

        for (int i = minp, j = maxp; i <= maxp; i++, j--)
        {
            arr[i] = a[j];
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}