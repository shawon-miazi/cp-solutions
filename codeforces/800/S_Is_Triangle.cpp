#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long double area,s;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    if (area>0)
    {
        cout<<"Valid"<<endl;
        cout<<fixed<<setprecision(6)<<area;
    }
    else
    cout<<"Invalid"<<endl;
    return 0;
}