#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        string str;
        cin >> str;
        int n = str.size();
        int pos = 0;
        if (n > 3)
        {

            if (str[n - 1] == 'b')
            {
                for (int i = 1; i < n - 1; i++)
                {
                    if (str[i] == 'b')
                    {
                        pos = i;
                        break;
                    }
                }
                if (pos != 0 && str[0] == 'a')
                {
                    for (int i = 0; i < pos; i++)
                    {
                        cout << str[i];
                    }
                    cout << " ";
                    for (int i = pos; i < (n - 1); i++)
                    {
                        cout << str[i];
                    }
                    cout << " " << str[n - 1] << endl;
                }
                else if (pos == 0 && str[0] == 'a')
                {
                    for (int i = 0; i < n - 2; i++)
                        cout << str[i];
                    cout << " " << str[n - 2] << " " << str[n - 1]<<endl;
                }
                else if (str[0] == 'b')
                {
                    cout << str[0] << " ";
                    for (int i = 1; i < n - 1; i++)
                        cout << str[i];
                    cout << " " << str[n - 1] << endl;
                }
            }
            else if (str[n - 1] == 'a')
            {
                for (int i = 1; i < n - 1; i++)
                {
                    if (str[i] == 'a')
                    {
                        pos = i;
                        break;
                    }
                }
                if (str[0] == 'a')
                {
                    cout << str[0] << " ";
                    for (int i = 1; i < n - 1; i++)
                        cout << str[i];
                    cout << " " << str[n - 1] << endl;
                }
                else if (str[0] == 'b')
                {
                    if (pos == 0)
                    {
                        for (int i = 0; i < n - 2; i++)
                            cout << str[i];
                        cout << " " << str[n - 2] << " " << str[n - 1] << endl;
                    }
                    else
                    {
                        for (int i = 0; i < pos; i++)
                        {
                            cout << str[i];
                        }
                        cout << " ";
                        for (int i = pos; i < (n - 1); i++)
                        {
                            cout << str[i];
                        }
                        cout << " " << str[n - 1] << endl;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << str[i] << " ";
            cout << endl;
        }
    }
    return 0;
}