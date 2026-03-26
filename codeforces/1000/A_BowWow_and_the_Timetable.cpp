#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    unsigned long long int n=s.size(),a=0,cnt=0;
    for (long long int i=0;i<s.size();i++)
    {
        if (i%2==0 && i<n-1)
        {
            cnt++;
        }
        if (i<n-1 && s[i]=='1')
        {
            n++;
        }
    }
    if (a==1)
    cnt++;
    cout<<cnt<<endl;
    return 0;
}