#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        long long int maxs = 0, mins = 0, max = 0, min = 1000000000,sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxs += ceil((arr[i] / (double)x));
            // cout<<maxs<<" ";
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(), arr.end());
        mins=ceil((sum / (double)x));
        
        cout << mins << " " << maxs << endl;
    }
 
    return 0;
}