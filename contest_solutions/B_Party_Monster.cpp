#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ca=0,cb=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]==')')
            ca++;
            else 
            cb++;
        }
        if (ca==cb)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}