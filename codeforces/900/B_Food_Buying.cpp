#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, a = 0;
        cin >> n;
        a = n;
        while (n > 0)
        {
            if (n > 9)
            {
                sum += n-(n%10);
                n = floor(n / 10) + (n % 10);
            }
            else 
            {
                sum+=n;
                n=0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}