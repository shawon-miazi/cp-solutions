#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string temp = n;
    string a = "9999", sum = "", pro="";
    long long int x, c = 0,m=9999;
    if (temp.size() < a.size())
    {
        swap(temp, a);
    }
    reverse(temp.begin(), temp.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        x = temp[i] - '0' + a[i] - '0' + c;
        sum += (x % 10) + '0';
        c = x / 10;
    }
    for (int i = a.size(); i < temp.size(); i++)
    {
        x = temp[i] - '0' + c;
        sum += (x % 10) + '0';
        c = x / 10;
    }
    if (c > 0)
        sum += c + '0';
    reverse(sum.begin(), sum.end());
    cout << sum<<endl;
    c=0,x=0;
    reverse(n.begin(),n.end());
    for (int i = 0; i < n.size(); i++)
    {
        x = (n[i] - '0')*m + c;
        pro += (x % 10) + '0';
        c = x / 10;
    }
    string t=to_string(c);
    reverse(t.begin(),t.end());
    if (c > 0)
        pro += t;
    reverse(pro.begin(),pro.end());
    cout<<pro<<endl;
    return 0;
}