#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if (b<a)
    {
        long long int temp=a;
        a=b;
        b=temp;
    }
    long long int sum,s,n,m;
    for (int i=0;i<3;i++)
    {
        if(i==0)
        {
            sum=(b*(b+1))/2;
            s=(a*(a+1))/2;
            s=sum-s+a;
        }
        else if (i==1)
        {
            if (a%2==1)
            m=(a/2);
            else
            m=(a/2)-1;
            n=(b/2);
            sum=n*(n+1);
            s=m*(m+1);
            s=sum-s;
        }
        else if (i==2)
        {
            m=(a/2);
            if (b%2==1)
            n=(b/2)+1;
            else
            n=(b/2);
            sum=n*n;
            s=m*m;
            s=sum-s;
        }
        cout<<s<<endl;
    }
    return 0;
}