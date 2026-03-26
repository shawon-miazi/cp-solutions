#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n;
    string s;
    cin >> s;
    vector<char> ar(n);
    if (n % 2 == 0)
    {
        l = (n - 1) / 2;
        for (int i = 0, j = 0; i < n; j++)
        {
            ar[l - j] = s[i];
            i++;
            ar[l + 1 + j] = s[i];
            i++;
        }
    }
    else
    {
        l = (n-1) / 2;
        for (int i = 0, j = 1; i < n; j++)
        {
            if (i == 0)
            {
                ar[l] = s[i];
                i++;
            }
            if (i!=0)
            {
                ar[l - j] = s[i];
                i++;
                ar[l + j] = s[i];
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
    }
    cout << endl;
    return 0;
}