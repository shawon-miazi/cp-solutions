#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        long long int n, sum = 0;
        cin >> n;
        vector<int> x(n), y(n);
        int cnt = 0;
        for (int i = 0, j = 0; i < n && j < n;)
        {
            if (cnt == 0)
            {
                cin >> x[i];
                cnt = 1;
                i++;
            }
            if (cnt == 1)
            {
                cin >> y[j];
                cnt = 0;
                j++;
            }
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        // for (int i=0;i<n;i++)
        // {
        //     cout<<x[i]<<" "<<y[i]<<endl;
        // }
        if (x[0]<0)
        sum += (x[0] * 2 * -1);
        sum +=(x[n-1] * 2 );
        if (y[0]<0)
        sum += (y[0] * 2 * -1);
        sum +=(y[n-1] * 2 );
        cout<<sum<<endl;
    }
    return 0;
}