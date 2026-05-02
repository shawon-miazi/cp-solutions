#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m1 = 1, m2 = n, m3 = n, p1 = -1, p2, f1 = 1, f2 = 1, f3 = 1;
        cin >> n;
        vector<int> arr(n * 2), fre(n + 1, 0);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                p2 = i;
            if (p1 == -1 && arr[i] == 0)
                p1 = i;
        }
        for (int i = p1, j = p2, d = 0; i + d <= j - d; d++)
        {
            if (arr[i + d] == arr[j - d])
            {
                fre[arr[i + d]]++;
                fre[arr[j - d]]++;
                if (i == j)
                    break;
            }
            else
            {
                f1 = 0;
                break;
            }
        }
        if (f1)
        {
            for (int i = p1 - 1, j = p2 + 1; j < 2 * n && i >= 0; i--, j++)
            {
                if (arr[i] == arr[j])
                {
                    fre[arr[i]]++;
                    fre[arr[j]]++;
                }
                else
                    break;
            }
            for (int i = 0; i < n + 1; i++)
            {
                // cout<<fre[i]<<" ";
                if (fre[i] == 0)
                {
                    m1 = i;
                    break;
                }
            }
        }
        // cout<<p1<<" "<<p2<<" *";

        for (int i = 0; i < n + 1; i++)
            fre[i] = 0;
        fre[arr[p1]]++;
        for (int i = p1 - 1, j = p1 + 1; i >= 0 && j < 2 * n; i--, j++)
        {
            if (arr[i] == arr[j])
            {
                fre[arr[i]]++;
                fre[arr[j]]++;
            }
            else
                break;
        }
        for (int i = 0; i < n + 1; i++)
        {
            // cout<<fre[i]<<" ";
            if (fre[i] == 0)
            {
                m2 = i;
                break;
            }
        }

        for (int i = 0; i < n + 1; i++)
            fre[i] = 0;
        fre[arr[p2]]++;
        for (int i = p2 - 1, j = p2 + 1; i >= 0 && j < 2 * n; i--, j++)
        {
            if (arr[i] == arr[j])
            {
                fre[arr[i]]++;
                fre[arr[j]]++;
            }
            else
                break;
        }
        for (int i = 0; i < n + 1; i++)
        {
            // cout<<fre[i]<<" ";
            if (fre[i] == 0)
            {
                m3 = i;
                break;
            }
        }
        int ans = max(m1, m2);
        cout << max(ans, m3) << endl;
    }
}