#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,q,ans;
    cin>>a>>b>>q;
    if (q==1)
    ans=a;
    else if (q==2)
    ans=b;
    else if (q!=2 && q%3==0)
    ans=(a^b);
    else if (q!=2 && q%3==1)
    ans=a;
    else if (q!=2 && q%3==2)
    ans=b;
    cout<<ans<<endl;
    return 0;
}