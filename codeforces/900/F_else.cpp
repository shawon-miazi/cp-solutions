#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;

    while (getline(cin, a) && getline(cin, b))
    {
        string A, B;
        string pro(a.size() + b.size(), '0');
        A = a;
        B = b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int c = 0, temp, i, j;
        for (int i = 0; a[i]; i++)
        {
            for (int j = 0; b[j]; j++)
            {
                temp = pro[i + j] - '0' + ((a[i] - '0') * (b[j] - '0')) + c;
                c = temp / 10;
                pro[i + j] = (temp % 10) + '0';
            }
        }
        int k = i + b.size();
        while (c)
        {
            int temp = (pro[k] - '0') + c;
            pro[k] = (temp % 10) + '0';
            c = temp / 10;
            k++;
        }

        int idx = pro.size() - 1;
        while (idx > 0 && pro[idx] == '0')
            idx--;
        pro = pro.substr(0, idx + 1);
        reverse(pro.begin(), pro.end());
        cout << pro << endl;
    }
    return 0;
}