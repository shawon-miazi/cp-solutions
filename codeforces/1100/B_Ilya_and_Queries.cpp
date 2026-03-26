#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t,a=s.size(),cnt=0;
    cin>>t;
    vector<int>pre(a);
    for (int i=0,j=1;i<a;i++,j++)
    {
        if (s[i]==s[i+1])
        cnt++;
        if (j<a)
        pre[j]=cnt;
        // cout<<pre[i]<<" ";
    }
    // cout<<endl;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int num=pre[m-1]-pre[n-1];
        cout<<num<<endl;
    }
}