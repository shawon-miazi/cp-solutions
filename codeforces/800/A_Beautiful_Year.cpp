#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0,f;
    cin>>n;
    vector<int>fre(10,0);
    for (int i=n+1;;i++)
    {
        f=1;
        fill(fre.begin(),fre.end(),0);
        string s=to_string(i);
        for (auto j=0;j<4;j++)
        {
            fre[s[j]-'0']++;
        }
        for (int j=0;j<10;j++)
        {
            if (fre[j]>1)
            f=0;
        }
        ans=i;
        if (f)
        break;
    }
    cout<<ans<<endl;
}