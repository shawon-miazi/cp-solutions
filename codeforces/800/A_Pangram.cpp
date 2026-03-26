#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    string s;
    cin>>s;
    vector<int>fre(26,0);
    for (int i=0;i<n;i++)
    {
        if (s[i]>='a'&& s[i]<='z')
        fre[s[i]-'a']++;
        else 
        fre[s[i]-'A']++;
    }
    for (int i=0;i<26;i++)
    {
        if (fre[i]==0)
        {
            f=0;
            // cout<<i<<" ";
            break;
        }
    }
    if (f==0)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
    return 0;
}