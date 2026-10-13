#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,ca=0,cb=0,ba=0,bb=0;
        string a,b;
        cin>>n>>a>>b;
        for (int i=0;i<n;i++)
        {
            if (a[i]=='a')
            ca++;
            else 
            cb++;
            if (b[i]=='a')
            ba++;
            else bb++;
        }
        if (ca==bb && cb==ba)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}