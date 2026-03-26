#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int a,b;
        a=(x+y)/2;
        b=(y-x)/2;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}