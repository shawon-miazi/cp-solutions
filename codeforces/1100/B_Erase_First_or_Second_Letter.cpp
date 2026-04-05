#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int>fre(26,0);
        for (int i=0;i<n;i++)
        {
            if (fre[s[i]-'a']==0)
            ans+=(n-i);
            fre[s[i]-'a']++;
        }
        cout<<ans<<endl;
    }
}