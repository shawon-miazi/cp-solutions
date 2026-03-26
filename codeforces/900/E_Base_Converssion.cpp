#include <bits/stdc++.h>
using namespace std;
void bin(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        bin(n / 2);
        cout << n % 2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bin(n);
        cout << endl;
    }
}