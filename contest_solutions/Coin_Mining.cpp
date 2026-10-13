#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int a,b,c=0,s=0,d=0,md=INT64_MAX,i=1,ld;
        cin>>a>>b;
        while (d<=md)
        {
            d++;
            c+=a;
            s+=(b*d*d);
            if (s>c)
            ld=d;
            else 
            ld=((c-s)/(b*d*d))+d+1;
            md=min(ld,md);
            // cout<<c<<" "<<s<<" "<<ld<<endl;
        }
        cout<<md<<endl;
    }
}