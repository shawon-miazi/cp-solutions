#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s,ot;
        cin>>s;
        vector<int>fre(2,0);
        for (auto x:s)
        {
            if (x=='1')
            fre[1]++;
            else 
            fre[0]++;
        }
        char mc='0',nc='1';
        int a=max(fre[0],fre[1]),b=min(fre[0],fre[1]),c=0,d=0,f=0;
        if (fre[1]>fre[0])
        {
            mc='1';
            nc='0';
        }
        for (int i=0,j=0;i<n && (a>0 || b>0);i++)
        {
            if ((j<k || b<=0) && a>0)
            {
                ot+=mc;
                j++;
                a--;
            }
            else if ((j>=k || a<=0 ) && b>0)
            {
                ot+=nc;
                j=0;
                b--;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (ot[i]=='0')
            c++;
            else
            d++;
            if (i<(n-k))
        }
        cout<<ot<<" ";
        if (c!=fre[0] || d!=fre[1])
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}