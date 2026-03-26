#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a="";
    cin>>s;
    a=s;
    reverse(a.begin(),a.end());
    string ans=s+a;
    cout<<ans<<endl;
    return 0;
}