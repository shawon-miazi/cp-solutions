#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c="";
    cin>>a>>b;
    for (int i=0,j=a.size();i<j;i++)
    {
        if ((a[i]=='1'&& b[i]=='1')|| (a[i]=='0' && b[i]=='0'))
        c+='0';
        else 
        c+='1';
    }
    cout<<c<<endl;
}