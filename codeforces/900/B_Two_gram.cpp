#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    int cnt=0;
    map<pair<char,char>,int>fre;
    for (int i=0;i<n;i++)
    {
        cin>>str[i];
        if (i>0)
        {
            fre[{str[i-1],str[i]}]++;
        }
    }
    for (auto x : fre)
    {
        
        if (x.second > cnt )
        cnt=x.second;
    }
    for (auto x : fre)
    {
        if (x.second == cnt)
        {
            cout<<x.first.first<<x.first.second<<endl;
            break;
        }
    }
    
    return 0;
}