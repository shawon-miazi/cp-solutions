#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0, pos = -1,f=0;
        cin >> n;
        vector<int> fre(n), arr(1105, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> fre[i];
            arr[fre[i]]++;
        }
        for (int i = 1100, j = -1; i > 0; i--)
        {
            f=0;
            if (arr[i] != 0 && j == -1)
            {
                j = i;
            }
            else
            {
                if (arr[i] != 0)
                {
                    if (arr[i] >= arr[j])
                    {
                        if (arr[i]==arr[j])
                        f=1;
                        sum += ((i * arr[j]) + (j * arr[j]));
                        arr[i] -= arr[j];
                        arr[j] = 0;
                        j=i;
                    }
                    else
                    {
                        sum += ((i * arr[i]) + ((arr[i] + 1) * j));
                        arr[j] -= (arr[i] + 1);
                        arr[i] = 0;
                    }
                    if (f)
                    j=-1;
                }
            }
        }
        for (int i = 0; i < 1100; i++)
        {
            if (arr[i] != 0)
            {
                sum += i;
                arr[i]--;
            }
            if (arr[i] != 0)
                pos = i;
        }
        if (pos != -1)
            sum += pos;
        cout << sum << endl;
    }
}