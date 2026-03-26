#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0,d,pos1=0,pos2=0,flag=0,cnto=0;
        string s;
        cin>>s;
        vector<int>ar(n);
        for (int i=0;i<n;i++)
        {
            if (s[i]=='1')
            cnto++;
            if (s[i]=='1' && flag==0)
            {
               pos1=i+1;
               flag=1;
            }
            else if (s[i]=='0')
            {
                pos2=i+1;
            }
        }
        cout<<pos1<<" "<<pos2<<endl;
    }
    return 0;
}