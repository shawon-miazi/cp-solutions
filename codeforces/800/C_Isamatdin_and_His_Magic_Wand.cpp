#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (e > 0 && o > 0)
            sort(arr + 0, arr + n);
        for (int j=0;j<n;j++)
        cout<<arr[j]<<" ";
        cout<<endl;
    }
    return 0;
}