#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m = 0, x = 0, f = 0, mn = INT32_MAX;
        cin >> n >> k;
        vector<int> arr(n), a(1000000, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a[arr[i]]++;
            m = max(arr[i], m);
            mn = min(arr[i], mn);
        }
        sort(arr.begin(), arr.end());
        x=0;
        for (int i=m,j=m;i>0;i--)
        {
            
            if (i==j && a[i]%2==0)
            {
                f=1;
                break;
            }
            else if (a[i-1]!=0)
            {
                f=1;
                break;
            }
            else 
        }
        
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}