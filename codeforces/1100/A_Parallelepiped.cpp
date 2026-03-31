#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    x=sqrt((a*b)/c);
    y=sqrt((c*b)/a);
    z=sqrt((a*c)/b);
    cout<<4*(x+y+z)<<endl;
}