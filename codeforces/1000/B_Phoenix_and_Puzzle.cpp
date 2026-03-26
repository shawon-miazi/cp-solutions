#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=n/2,b=n/4;
        double c=sqrt(a),d=sqrt(b);
        if ((c==(int)c && n%2==0) || (d==(int)d && n%4==0))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}