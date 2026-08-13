#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << 0 << endl;
        else
        {
            int val = (ceil(n / 3.0)) * 3;
            int ans = (val - n), b = (ceil(n / 5.0)) * 5, m = 1;
            
            if (n % 5 == 0)
            {
                b = ((n / 5.0) + 1) * 5;
            }
            for (int i = 0; i < 2; i++)
            {
                if (b % 3 == 0)
                {
                    ans = min(ans, m);
                    break;
                }
                else
                {
                    int c = (ceil(b / 3.0)) * 3;
                    ans = min(ans, (abs(c - b) + m));
                }
                m++;
                b+=5;
            }
            cout<<ans<<endl;
        }
    }
}
