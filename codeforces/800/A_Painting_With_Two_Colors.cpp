#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if (b==n)
        cout<<"YES"<<endl;
        else if (b>=a && b%2==n%2)
        cout<<"YES"<<endl;
        else if (a%2==n%2 && b%2==n%2)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}