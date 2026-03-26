#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum=0,c;
    cin>>n>>m>>a>>b;
    if (b>=(m*a))
    {
        sum+=(n*a);
    }
    else 
    {
        c=floor((double)n/m);
        n-=(c*m);
        if ((a*n)<=b)
        sum+=(c*b)+(a*n);
        else 
        sum+=(c*b)+b;
    }
    cout<<sum<<endl;
}