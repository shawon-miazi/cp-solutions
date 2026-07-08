#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        while (1)
        {
            if (__gcd(a,c)!=__gcd(b,c))
            {
                c++;
                cnt++;
            }
            else 
            {
                cnt++;
                break;
            }
        }
        if (a!=b)
        cout<<cnt<<endl;
        else 
        cout<<0<<endl;
    }
}