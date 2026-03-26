#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, flag = 0, cnt = 0;
        cin >> n;
        vector<unsigned long long int> arr;
        
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        if (n == 1)
            cnt=0;
        else
        {
            for (int j = 1; j < n; j++)
            {
                int x = 1;
                if ((arr[j] % 2 == 0 && arr[j - 1] % 2 == 0) || (arr[j] % 2 == 1 && arr[j - 1] % 2 == 1))
                {
                    arr[j]*=arr[j-1];
                    cnt++;
                    
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}