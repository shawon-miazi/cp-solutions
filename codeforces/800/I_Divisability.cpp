#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,x,sum=0,i;
    cin>>a>>b>>x;
    i=a/x;
    if (i==0)
    i=1;
    for ( i;i*x<=b;i++)
    {
        if ((x*i)>=a)
        {
            sum+=x*i;
        }
    }
    cout<<sum<<endl;
    return 0;
}