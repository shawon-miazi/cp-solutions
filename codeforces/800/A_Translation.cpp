#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if (a.size()!=b.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (long long int i=0,j=a.size()-1;i<a.size();i++,j--)
    {
        if (a[i]!=b[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}