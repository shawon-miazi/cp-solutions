#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        long long int n, k;
        cin >> n >> k;
        if ((n % 2 != k % 2) || ((k * k) > n))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
            
    }
}