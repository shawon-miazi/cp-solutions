#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, f, x, y,g=0;
        cin >> n;
        vector<long long int> arr(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1;; i++)
        {
            a=pow(2,i);
            f = 1, x = -1, y = -1;
            for (int j = 0; j < n; j++)
            {
                ans[j] = (arr[j] %a);
                if (j == 0)
                {
                    x = ans[j];
                }
                else if (ans[j] != x && y == -1)
                {
                    y = ans[j];
                }
                else if (ans[j] != x && ans[j] != y && x != -1 && y != -1)
                {
                    f = 0;
                    break;
                }
            }
            if (f && x != -1 && y != -1)
            {
                break;
            }
        }
        cout<<a<<endl;
    }
}