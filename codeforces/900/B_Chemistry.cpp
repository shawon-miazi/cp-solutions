#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,sum,mo=INT32_MAX,x,cnt=0;
        cin>>n>>a;
        string s;
        cin>>s;
        vector<int>fre(26,0);
        for (int i=0;i<n;i++)
        {
            fre[s[i]-'a']++;
        }
        x=n-a;
        for (int i=0;i<26;i++)
        {
            if (fre[i]%2==1)
            {
                cnt++;
            }
        }
        if ((n-a)==1)
        cout<<"YES"<<endl;
        else 
        {
            sum-=mo;
            if (x%2==0)
            {
                if (a>=cnt)
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
            }
            else 
            {
                if (a>=(cnt-1))
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
            }
        }
    }
}