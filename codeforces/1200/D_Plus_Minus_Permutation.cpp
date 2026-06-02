#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x,y,a=0,b=0;
        cin>>n>>x>>y;
        if (x==y)
        {
            cout<<0<<endl;
        }
        else 
        {
            long long int j=__gcd(x,y);
            j=((x*y)/j);
            long long int i=(n/j),k;
            x=n/x;
            y=n/y;
            x-=i;
            y-=i;
            k=n-x;
            b=(y*(y+1))/2;
            a=(((n*(n+1))/2)-((k*(k+1))/2));
            cout<<a-b<<endl;
        }
    }
}