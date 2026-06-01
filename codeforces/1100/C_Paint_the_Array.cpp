#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f = 1,a=0,b=0;
        cin >> n;
        vector<long long int> arr(n), e, o;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
                a=__gcd(a,arr[i]);
            else
                b=__gcd(b,arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if ((i % 2 == 0 && arr[i] % a != 0) || (i % 2 == 1 && arr[i] % a == 0))
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << a << endl;
        }
        else
        {
            f=1;
            for (int i = 0; i < n; i++)
            {
                if ((i % 2 == 1 && arr[i] % b != 0) || (i % 2 == 0 && arr[i] % b == 0))
                {
                    f = 0;
                    break;
                }
            }
            if (f)
            cout<<b<<endl;
            else 
            cout<<0<<endl;
        }
    }
}