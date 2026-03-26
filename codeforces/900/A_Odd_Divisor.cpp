#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, flag = 0, i, di;
        cin >> n;
        if (n % 2 == 1)
            cout << "YES" << endl;
        else
        {
            while (n!=1)
            {
                n/=2;
                if (n==1)
                break;
                if (n%2==1)
                {
                    flag=1;
                    break;
                }
                
            }
            if (flag == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}