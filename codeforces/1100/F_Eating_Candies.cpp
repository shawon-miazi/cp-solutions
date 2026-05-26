#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, cnt = 0, x1 = 0, x2 = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
            cout << 0 << endl;
        else
        {
            x1 += arr[0];
            x2 += arr[n - 1];
            if (x1 == x2)
            {
                cnt = 2;
            }
            for (int i = 0, j = n - 1, l = 1; i<j;)
            {
                if (x1 < x2)
                {
                    x1 += arr[i+1];
                    i++;
                }
                else if (x1 > x2)
                {
                    x2 += arr[j-1];
                    l++;
                    j--;
                }
                if (x1 == x2)
                {
                    cnt = (i + l + 1);
                    if ((i+1)>=(j-1))
                    break;
                    x1 += arr[i+1];
                    i++;
                    x2 += arr[j-1];
                    j--;
                    l++;
                }
            }
            cout << cnt << endl;
        }
    }
}