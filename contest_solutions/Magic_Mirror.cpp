#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, a, b, f = 1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i=0,j=n-1;i<(n/2);i++,j--)
        {
            a=abs(arr[i]-arr[i+1]);
            b=abs(arr[j]-arr[j-1]);
            if (a!=b)
            f=0;
        }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
