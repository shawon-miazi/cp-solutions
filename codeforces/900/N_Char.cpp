#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        a = a - 'a' + 'A';
    }
    else
        a = a - 'A' + 'a';
    cout << a << endl;
    return 0;
}