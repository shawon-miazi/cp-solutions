#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int a,b,mcnt=0,cnt=0;
    map<long long int,long long int>mp;
    while (t--)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    for (auto x : mp)
    {
        cnt+=x.second;
        mcnt=max(mcnt,cnt);
    }
    cout<<mcnt<<endl;
}