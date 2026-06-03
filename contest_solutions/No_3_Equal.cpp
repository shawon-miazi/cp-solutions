#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i=0;i<n-2;i++)
        {
            if (s[i]==s[i+1] && s[i]==s[i+2])
            {
                cnt++;
                i+=2;
            }
        }
        cout<<cnt<<endl;
    }
}