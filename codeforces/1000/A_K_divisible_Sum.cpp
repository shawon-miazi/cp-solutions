#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        if (n > k && (n % k != 0))
            cout << 2 << endl;
        else if (n > k && (n % k == 0))
            cout << 1 << endl;
        else
        {
            if (k%n==0)
            i=k/n;
            else 
            i=(k/n)+1;
            cout << i << endl;
        }
    }
    return 0;
}