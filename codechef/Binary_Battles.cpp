#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c,cnt=0,sum=0;
        cin >> a >> b >> c;
        while (a!=1)
        {
            cnt++;
            a/=2;
        }
        cout<<((cnt*b)+((cnt-1)*c))<<endl;
    }
}
