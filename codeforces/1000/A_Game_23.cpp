#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,ans;
    cin>>n>>m;
    if (n==m)
    cout<<0<<endl;
    else if (m%n!=0)
    cout<<-1<<endl;
    else 
    {
        ans=m/n;
        while (ans%2==0)
        {
            ans/=2;
            cnt++;
        }
        while (ans%3==0)
        {
            ans/=3;
            cnt++;
        }
        if (ans!=1)
        cnt=-1;
        cout<<cnt<<endl;
    }
    return 0;
}