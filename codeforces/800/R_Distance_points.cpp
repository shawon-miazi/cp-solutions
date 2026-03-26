#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,x,y,dis,i,j;
    cin>>a>>b>>x>>y;
    i=x-a;
    j=y-b;
    dis=sqrt((i*i)+(j*j));
    cout<<fixed<<setprecision(9)<<dis<<endl;
    return 0;
}