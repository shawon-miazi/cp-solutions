#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b<c || a>d)
    cout<<-1<<endl;
    else 
    {
        if (a>c)
        c=a;
        if (b<d)
        d=b;
        cout<<c<<" "<<d<<endl;
        
    }
    return 0;
}