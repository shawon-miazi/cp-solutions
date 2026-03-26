#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> arr;
        int n, sum = 0, flag = 1;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end(), greater<int>());
        if (arr[0] == arr[1])
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[1] != arr[k])
                {
                    int temp = arr[1];
                    arr[1] = arr[k];
                    arr[k] = temp;
                    break;
                }
            }
        }
        sum = 0;
        for (int j = 0; j < n; j++)
        {

            if (sum == arr[j])
                flag = 0;
            sum += arr[j];
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
                
            cout << endl;
        }
    }
    return 0;
}