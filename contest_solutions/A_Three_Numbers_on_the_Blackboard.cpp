#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c,d=max(max(a,b),c),e=min(min(a,b),c);
        if ((s-d)>=d)
        cout<<d-e<<endl;
        else 
        cout<<(s-d)-e<<endl;
        
    }
}