#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, re = "";
    cin >> str;
    int n = str.size(),cnt=0,flag=0;

    for (int i = 0; i < n ; i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 2;
            if (flag==1 && cnt==1)
            {
                re+=" ";
                cnt=0;
            }
            
        }
        else
        {
            flag=1;
            cnt=1;
            re += str[i];
        }
    }
    cout << re << endl;
    return 0;
}