#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, a = 0;
        cin >> n;
        string s, ss;
        cin >> s;
        ss = s;
        sort(ss.begin(), ss.end());
        vector<int> arr(n, -1);
        for (int i = 0, j = 0; i < n; i++)
        {
            if (s[i] != ss[i])
            {
                f = 1;
                arr[j] = i+1;
                j++;
                a++;
            }
        }
        if (f == 0)
            cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << a << " ";
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > -1)
                    cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}