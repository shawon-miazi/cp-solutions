#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0, maxv = 0, cntz = 0, cnto = 0, x = 0, a = 0, max = 0, f = 1;
        cin >> n >> k;
        vector<int> arr(n), ar(k), fre(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                cntz++;
            else
                cnto++;
            if (i == 0)
                x = arr[i];
            else if (i != 0 && arr[i] != x)
                f = 0;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        for (int i = 0, l = 0; i < n; i++)
        {
            if (cntz < cnto)
            {
                if (l < k && i == ar[l] - 1)
                {
                    a = 0;
                    l++;
                    fre[i] = 0;
                }
                else if (arr[i] == 0)
                {
                    a++;
                    fre[i] = a;
                    for (int j = i + 1; j < n; j++)
                    {
                        if (arr[j] == 1 || j == n - 1 || (l < k && j == ar[l] - 1))
                        {
                            i = j - 1;
                            fre[i] = a;
                            break;
                        }
                        else
                        {
                            fre[j] = a;
                        }
                    }
                }
            }
            else
            {
                if (l < k && i == ar[l] - 1)
                {
                    a = 0;
                    fre[i] = 0;
                    l++;
                }
                else if (arr[i] == 1)
                {
                    a++;
                    fre[i] = a;
                    for (int j = i + 1; j < n; j++)
                    {
                        if (arr[j] == 0 || j == n - 1 || (l < k && j == ar[l] - 1))
                        {
                            i = j - 1;
                            fre[i] = a;
                            break;
                        }
                        else
                        {
                            fre[j] = a;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            // cout << fre[i] << " ";
            if (fre[i] > max)
                max = fre[i];
        }
        if (f)
            cout << 0 << endl;
        else
        {
            if (f != 1 && max == 0)
                cout << 2 << endl;
            else
                cout << max * 2 << endl;
        }
    }
}