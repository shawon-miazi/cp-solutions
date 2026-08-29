#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, cnt = 0, mc = 0, mx = 0,mv=0;
        cin >> n >> m;
        vector<long long int> arr(n);
        int fre[200110]={0},sum[200110]={0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            fre[arr[i]]++;
            mx = max(mx, arr[i]);
        }
        long long int temp = 0, re;
        for (int i = 1; i <= 200050 && i<=mx; i++)
        {
            if (fre[i] > 0)
            {
                temp += fre[i];
            }
            sum[i] = n - temp;
        }
        temp = 0;
        for (int i = 1; i <= 200050 && i<=m && i<=mx ; i++)
        {
            temp = 0;
            if ((i * 2) < 200010)
            {
                if (fre[i * 2] > 0)
                    temp = (fre[i * 2] * 2) - fre[i * 2];
            }
            cnt = fre[i] + temp + sum[i];
            mc = max(mc, cnt);
        }
        cout << mc << endl;
    }
}