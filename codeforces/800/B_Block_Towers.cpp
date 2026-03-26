#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> arr(n);
        long long int num;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin()+1,arr.end());
        for (int l = 1; l < n; l++)
        {
            if (arr[l] > arr[0])
            {
                num = arr[l] - arr[0];
                if (num % 2 == 0)
                {
                    arr[0] = arr[0] + (int)(num / 2);
                }
                else
                {
                    arr[0] = (arr[0] + (int)(num / 2) + 1);
                }
            }
        }
        cout << arr[0] << endl;
    }
    return 0;
}