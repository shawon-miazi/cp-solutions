#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a(4);
    for (int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    int sum=0;
    for (int i=0,j=s.size();i<j;i++)
    {
        sum+=a[s[i]-'0'-1];
    }
    cout<<sum<<endl;
}