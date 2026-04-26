#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, val, ans = 0, x, cnt = 0, sum = 0,d;
        cin >> n >> val;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int l=0,r=INT32_MAX,mid;
        while (l<r)
        {
            mid=(l+r+1)/2;
            sum=0;
            for (int i=0;i<n;i++)
            {
                sum+=max(mid-arr[i],(long long )0);
            }
            if (sum<=val)
            l=mid;
            else 
            r=mid-1;
        }
        cout << l << endl;
    }
}