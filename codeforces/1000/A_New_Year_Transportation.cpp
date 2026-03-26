#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k = 0, f = 0;
    cin >> n >> t;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0,j=-1; i < n - 1;)
    {
        i = arr[i] + i ;
        if (i>j)
        {
            j=i;
        }
        else if (i<j)
        {
            break;
        }
        if (i == t-1)
        {
            f = 1;
            break;
        }
        else if (i > t-1)
            break;
    }
    if (f == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}