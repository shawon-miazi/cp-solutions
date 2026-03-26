#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    ans=(a*b);
    ans%=100;
    ans*=c;
    ans%=100;
    ans*=d;
    ans%=100;
    if (ans!=0 && ans/10!=0)
    cout<<ans<<endl;
    else if (ans!=0 && ans/10==0)
    cout<<0<<ans<<endl;
    else 
    cout<<0<<0<<endl;
    return 0;
}