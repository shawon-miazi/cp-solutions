#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0,a,b,m=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        n-=a;
        n+=b;
        m=max(m,n);
    }
    cout<<m<<endl;
}