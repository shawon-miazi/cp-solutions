#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, mc = 0, x = 0,a;
        cin >> n;
        vector<long long int> arr(n), psum(n, 0),ar(n);;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ar[i]=arr[i];
        }
        a = arr[0];
        for (int i = 1; i < n; i++)
        {
            a += ar[i];
            x = floor(a / (double)(i + 1));
            if (x > arr[i] )
                arr[i] = x;
            if (arr[i]>arr[i-1])
            arr[i]=arr[i-1];
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}