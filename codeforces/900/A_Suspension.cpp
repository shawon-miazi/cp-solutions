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
        int y,r;
        cin>>y>>r;
        int cnty=0,cntr=0;
        cnty=y/2;
        cntr=r;
        if (cnty+cntr<=n)
        cout<<cnty+cntr<<endl;
        else
        cout<<n<<endl;
    }
    return 0;
}