#include<bits/stdc++.h>
using namespace std;
int fun(int b)
{
    int ans=0;
    while (b>0)
    {
        ans+=(b%10);
        b/=10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,sum=0,f=0,cnt=0;
        cin>>n;
        for (int i=n;i<(n+100);i++)
        {
            sum=fun(i);
            if ((i-sum)==n)
            {
                f=1;
                break;
            }
        }
        if (f==1)
        cout<<10<<endl;
        else 
        cout<<0<<endl;
    }
    return 0;
}