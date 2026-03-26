#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maxv = 0, pos, cnt = 0, mcnt = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxv && i != 0 && i != n - 1)
            maxv = arr[i];
    }
    // cout<<maxb<<endl;
    for (int i = 0; i < n; i++)
    {
        cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[j-1])
            {
                break;
            }
            else
                cnt++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[j+1])
            {
                break;
            }
            else
                cnt++;
        }

        if (cnt > mcnt)
            mcnt = cnt;
    }
    cout << mcnt << endl;
    return 0;
}