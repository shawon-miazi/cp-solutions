#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, cntz = 0, cnto = 0, cnt = 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                cntz++;
            else if (arr[i] == 1)
            {
                cnto++;
            }
        }
        for (int i = 0; i < cntz; i++)
            cnt *= 2;

        cnt *= cnto;
        cout << cnt << endl;
    }
    return 0;
}