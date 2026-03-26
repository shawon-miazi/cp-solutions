#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    char c=s[0];
    for (int i=1;i<n;i++)
    {
        if (s[i]==c)
        {
            cnt++;
        }
        else 
        {
            c=s[i];
        }
    }
    cout<<cnt<<endl;
}