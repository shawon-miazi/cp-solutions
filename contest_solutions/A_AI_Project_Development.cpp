#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,b,c,d,cnt=0,e,f;
        cin>>n>>b>>c>>d;
        e=ceil((double)n/(b+c));
        if (e>d)
        {
            cnt=d;
            n-=(d*b);
            cnt+=ceil((double)n/(10*c+b));
        }
        else 
        cnt=e;  
        cout<<cnt<<endl;
    }
}