#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,r;
    unsigned long long int b,flag=0,c=0,v=0;
    cin>>str>>b;
    for (int i=0;i<str.size();i++)
    {
        c=(c*10)+(str[i]-'0');
        if (c>=b)
        {
            c%=b;
        }
    }
    if (c==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}