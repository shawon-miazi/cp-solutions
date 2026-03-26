#include<bits/stdc++.h>
using namespace std;
long long int a,b,n;
long long int good(long long int x)
{
    return (x/a)*(x/b)>=n;
}
int main()
{
    cin>>a>>b>>n;
    long long int l=0,r=1;
    while (!good(r))r*=2;
    while (r>l+1)
    {
        long long int m=(l+r)/2;
        if (good(m))
        {
            r=m;
        }
        else 
        l=m;
    }
    cout<<r<<endl;
    return 0;
}