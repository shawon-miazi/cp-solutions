#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        int n;
        cin >> n;
        int arr[n], val;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i==0)
            val=arr[0];
            if (i == 1)
            {
                val = arr[0] & arr[1];
            }
            else if (i > 1)
            {
                val = val & arr[i];
            }
        }
        cout<<val<<endl;
    }
    return 0;
}