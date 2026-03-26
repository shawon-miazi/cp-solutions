#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0, flag = 0, cnt = 0, temp=0;
        cin >> n;
        m = n + 1;
        vector<int> arr(n), fre(m, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] == 1)
            {
                cnt++;
            }
            else if (arr[i + 1] - arr[i] > 1)
            {
                if (flag == 0)
                {
                    temp = cnt;
                    flag=1;
                }
                else if (temp < cnt)
                {
                    temp = cnt;
                }
                cnt = 0;
            }
        }
        if (cnt>temp)
        temp=cnt;
        cout<<temp+1<<endl;
    }
    return 0;
}