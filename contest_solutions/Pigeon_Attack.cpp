#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = 1, j = 0; j < a; i++)
        {
            if (i % b)
            {
                j++;
                if (j == a)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
