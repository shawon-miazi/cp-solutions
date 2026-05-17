#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long int e=min(a,b),f=max(a,b);
        long long int x=abs(b-a);
        long long int y=(n-f)+e;
        x=min(x,y);
        x+=c;
        if (n>3)
        cout<<x<<endl;
        else 
        cout<<1<<endl;
    }
}