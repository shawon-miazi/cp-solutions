#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int s,a,b,z;
        cin>>s>>a>>b>>z;
        if (s>=(a+b+z))
        cout<<0<<endl;
        else 
        {
            int c=(s-a-b);
            if ((c+a)>=z || (c+b)>=z)
            cout<<1<<endl;
            else 
            cout<<2<<endl;
        }
    }
}