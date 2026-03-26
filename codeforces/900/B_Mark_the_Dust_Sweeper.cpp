#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n], flag = 0, sum = 0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i!=n-1)
            sum+=arr[i];
            if (arr[i] != 0 && flag == 0)
            {
                flag=1;
            }
            else if (flag==1 && arr[i]==0 && i!=n-1)
            cnt++;
        }
        cout<<cnt+sum<<endl;
    }
    return 0;
}