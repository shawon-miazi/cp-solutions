#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int b = (x - n);
        cout << (int)pow(2, b) << endl;
    }
}
