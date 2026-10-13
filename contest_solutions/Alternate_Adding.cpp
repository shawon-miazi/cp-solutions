#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, an = 0, cnt = 0, mx = 0, f = 0, pos = -1, l = -1;
        cin >> n;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0))
            {
                if (l == -1)
                {
                    l = i;
                }
                pos = i + 1;
                f = 1;
            }
            else
            {
                if (pos != -1)
                {
                    mx=0;
                    for (int j = l; j <= pos; j++)
                    {
                        mx=max(mx,abs(arr[j]));
                        arr[j] = 0;
                    }
                    an += mx;
                    mx=0;
                    l = -1;
                    pos = -1;
                    f = 0;
                }
            }
        }
        if (pos!= -1)
        {
            mx=0;
            for (int i = l; i <= pos; i++)
            {
                mx=max(mx,abs(arr[i]));
                arr[i] = 0;
            }
            an += mx;
        }
        for (auto a : arr)
            an += abs(a);
        cout << an << endl;
    }
}