#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if (a%b==0)
        cout<<0<<endl;
        else 
        {
            int c=ceil((double)a/b);
            cout<<(c*b)-a<<endl;
        }
    }
}