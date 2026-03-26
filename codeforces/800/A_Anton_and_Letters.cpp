#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=0;
    vector<int>fre(26,0);
    for (int i=0;i<s.size();i++)
    {
        if (s[i]-'a'>=0 && s[i]-'a'<=25 && fre[s[i]-'a']==0)
        {
           cnt++;
           fre[s[i]-'a']++;
        }
        
    }
    cout<<cnt<<endl;
}