#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int q=0;q<t;q++)
    {
        int n,l=0,r=0,num=-1,cnt=-1;
        cin>>n;
        string str;
        cin>>str;
        for (int i=0;i<n;i++)
        {
            if (str[i]=='L')
            {
                l++;
                if (num==-1)
                num=i;
                
            }
            else if (str[i]=='R')
            {
                r++;
                if (num==-1)
                {
                    num=-2;
                }
                if (cnt==-1)
                cnt=i;
                
            }
        }
        if (l==0 || r==0)
        cout<<"-1"<<endl;
        else if (l>0 && r>0)
        {
            if(num==-2)
            cout<<"0"<<endl;
            else
            {
                cout<<cnt-num<<endl;
            }
        }
        
    }
    return 0;
}