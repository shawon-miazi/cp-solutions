#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,p,q,r,sum=0;
        cin>>a>>b>>p>>q>>r;
        if (a%2==0 && b%2==0 )
        {
            if ((p+q)<(2*r))
            sum+=((a/2)*p)+((b/2)*q);
            else 
            {
                if (a>b)
                {
                    sum+=(a-b)*r;
                    a=b;
                }
                else 
                {
                    sum+=(b-a)*r;
                    b=a;
                }
                sum+=(a*r);
            }
        }
        else if (a%2 && b%2)
        {
            if ((p+q)<(2*r))
            {
                sum+=((a-1)/2*p)+((b-1)/2*q);
                if ((p+q)<r)
                sum+=(p+q);
                else 
                sum+=r;
            }
        }
        else 
        {
            if ((a%2==0 && (p+q)>(p+r)) || (b%2==0 && (p+q)>(q+r)))
            {
                if (a%2==0)
                {
                    sum+=(p+r);
                    a-=2;
                    b-=1;
                }
                else 
                {
                    sum+=(q+r);
                    b-=2;
                    a--;
                }
                
            }
            else 
            {
                sum+=(p+q);
                if (a%2==0)
                {
                    a-=2;
                    b--;
                }
                else 
                {
                    b-=2;
                    a--;
                }
            }
            if ((p+q)<(2*r))
            sum+=((a/2)*p)+((b/2)*q);
            else 
            {
                if (a>b)
                {
                    sum+=(a-b)*r;
                    a=b;
                }
                else 
                {
                    sum+=(b-a)*r;
                    b=a;
                }
                sum+=(a*r);
            }
        }
        cout<<sum<<endl;
    }
}