#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    unsigned long long int c,p,n=1,r=1,m=1;
    for (int i=1;i<=a;i++)
    {
        n*=i;
    }
    for (int i=1;i<=b;i++)
    {
        r*=i;
    }
    for (int i=1;i<=(a-b);i++)
    {
        m*=i;
    }
    p=n/m;
    c=n/(r*m);
    cout<<c<<" "<<p<<endl;
    return 0;
}