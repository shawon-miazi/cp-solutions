#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1,i,g=0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i]!=1)
            g=1;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == (n - 1))
            {
                if (i == 0)
                {
                    if ((arr[i] % 2 == 0 && arr[i + 1] < floor(arr[i] / 2)) || (arr[i] % 2 == 1 && arr[i + 1] < ceil(arr[i] /2)))
                    {
                        f = 0;
                        break;
                    }
                }
                if (i == (n - 1))
                {
                    if ((arr[i] % 2 == 0 && (arr[i - 1] < floor(arr[i] / 2))) || (arr[i] % 2 == 1 && (arr[i - 1] < ceil(arr[i] / 2))))
                    {
                        f = 0;
                        break;
                    }
                }
            }
            else
            {
                if ((arr[i] % 2 == 0 && arr[i + 1] < (arr[i] * 2) && arr[i-1]<(arr[i]*2)))
                {
                    f = 0;
                    break;
                }
                if ((arr[i] % 2 == 1 && arr[i + 1] < floor(arr[i] / 2) && arr[i-1]<floor(arr[i]/2)) && ((arr[i + 1] < ceil(arr[i] * 2) || arr[i-1]<ceil(arr[i] / 2))))
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f==0 || g==0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}