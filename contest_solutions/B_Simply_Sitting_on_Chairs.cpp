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
        vector<int> arr(n+1), pos(n + 1, -1);
        int a = 1, b = 1,cnt=0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i=1;i<=n;i++)
        {
            if (arr[i]<=i)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}