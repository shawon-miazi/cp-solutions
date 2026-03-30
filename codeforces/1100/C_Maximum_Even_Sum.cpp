#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, sum = -1, d;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            d = b / 2;
            sum = (a * d) + (b / d);
        }
        else if (a % 2 == 0 && b % 2 == 1)
            sum = -1;
        else if (a % 2 == 1 && b % 2 == 0)
        {
            if (b % 4 == 0)
            {
                d = b / 2;
                sum = (a * d) + (b / d);
            }
        }
        else if (a%2==1 && b%2==1)
        {
            sum = (a * b) + 1;
        }

        cout << sum << endl;
    }
    return 0;
}