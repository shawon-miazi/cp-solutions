#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n, m, cnt = 0, flag = 0;
        cin >> n >> m;
        vector<int> arr, ar;
        for (int j = 0; j < n; j++)
        {
            int a, b;
            cin >> a >> b;
            arr.push_back(a);
            ar.push_back(b);
            if (flag == 0)
            {
                if (a % 2 == 0 && b == 1 || a % 2 == 1 && b == 0)
                {
                    cnt++;
                    flag = 1;
                }

            }
            else if (flag == 1)
            {
                if (a % 2 == 0 && b == 0 || a % 2 == 1 && b == 1)
                {
                    cnt++;
                    flag = 0;
                }
            }
        }

        cout << m - cnt << endl;
    }
    return 0;
}