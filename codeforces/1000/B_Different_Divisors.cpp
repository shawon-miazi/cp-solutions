#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,a=1,b,c,d,f=0;
        cin>>n;
        b=a+n;
        while (f==0)
        {
            f=1;
            for (int i=2;i*i<=b;i++)
            {
                if (b%i==0)
                {
                    f=0;
                    break;
                }
            }
            if (f==0)
            b++;
        }
        c=n+b;
        f=0;
        while (f==0)
        {
            f=1;
            for (int i=2;i*i<=c;i++)
            {
                if (c%i==0)
                {
                    f=0;
                    break;
                }
            }
            if (f==0)
            c++;
        }
        // cout<<b<<" "<<c<<" ";
        d=b*c;
        cout<<d<<endl;
    }
    return 0;
}