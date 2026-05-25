#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, f = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i % 2 == 0)
                cout << '#';
            else
            {
                if (f == 0)
                {
                    if (j < b - 1)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                        f = 1;
                    }
                }
                else
                {
                    if (j != 0)
                    {
                        cout << ".";
                    }
                    else
                        cout << "#";
                    if (j == b - 1)
                        f = 0;
                }
            }
        }
        cout << endl;
    }
}