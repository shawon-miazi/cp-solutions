#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long int a,b,k,s,sum=0,va=-1;
        cin>>a>>b>>k;
        for (int i=0;i<k;i++)
        {
            
            sum+=(b+i)%(a+i);
            
            if ((a+i)>(b-a))
            {
                s=i+1;
                va=(b+i)%(a+i);
                break;
            }
        }
        if (va!=-1)
        sum+=((k-s)*va);
        cout<<sum<<endl;
    }
}