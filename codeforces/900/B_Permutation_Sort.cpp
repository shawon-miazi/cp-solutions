#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != i + 1)
                flag = 0;
        }
        if (flag == 1)
            cout << 0 << endl;
        if (flag == 0)
        {
            if (arr[0] == 1 || arr[n - 1] == n)
                cout << 1 << endl;
            else if (arr[0]==n && arr[n-1]==1)
            cout<<3<<endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}