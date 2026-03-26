#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d, e, f = 0, pro;
        cin >> a >> b;
        if (b==1)
        cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
        }
    }
}