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
        string ans = "";
        int sum = 0;
        if (n <= 45)
        {
            for (int j = 9; j > 0; j--)
            {
                if (n == 0)
                    break;
                if (j <= n)
                {
                    ans += '0' + j;
                    n -= j;
                }
            }
            reverse(ans.begin(),ans.end());
            if (n == 0)
                cout << ans << endl;
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}