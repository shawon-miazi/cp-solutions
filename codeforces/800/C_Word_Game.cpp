#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int w=0;w<t;w++)
    {
        map<string,int>str;
        
        int n;
        cin>>n;
        vector<string> s(3*n);
        int a[3]={0};
        for (int i=0;i<3*n;i++)
        {
            cin>>s[i];
            str[s[i]]++;
        }
        
        for (int i=0;i<3*n;i++)
        {
            if (i>=0 && i<n)
            {
                if (str[s[i]]==2)
                a[0]+=1;
                else if (str[s[i]]==1)
                a[0]+=3;
            }
            else if (i>=n && i<n*2)
            {
                if (str[s[i]]==2)
                a[1]+=1;
                else if (str[s[i]]==1)
                a[1]+=3;
            }
            else if (i>=n*2 && i<n*3)
            {
                if (str[s[i]]==2)
                a[2]+=1;
                else if (str[s[i]]==1)
                a[2]+=3;
            }
        }
        for (int i=0;i<3;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}