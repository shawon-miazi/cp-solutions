#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, msum = INT32_MAX, sum = 0, x, pos;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                sum = ((arr[i] / 2) + arr[i - 1]);
                if (sum < msum)
                    msum = sum;
            }
        }
        sort(arr.begin(),arr.end());
        sum=arr[0]+arr[1];
        msum=min(sum,msum);
        cout << msum << endl;
    }
}
