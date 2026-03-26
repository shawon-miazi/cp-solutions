#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, num = 0;
    cin >> n >> a;
    a--;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b = (a - 0), c = (n - a);
    c = max(b, c);
    for (int i = 0, l, k; i <= c; i++)
    {
        l = a + i;
        k = a - i;
        if (i == 0 && arr[k] == 1)
            num++;
        else if (i != 0 && l < n && arr[l] == 1 && k >= 0 && arr[k] == 1)
            num += 2;
        else if (l < n && k < 0 && arr[l] == 1)
            num++;
        else if (k >= 0 && l >= n && arr[k] == 1)
            num++;
        // cout<<num<<" ";
    }
    cout << num << endl;
    return 0;
}