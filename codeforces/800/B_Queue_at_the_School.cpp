#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,f=0;
    cin>>n>>t;
    string s;
    cin>>s;
    for (int i=0;i<t;i++)
    {
        for (int j=0;j<n-1;)
        {
            f=0;
            if (s[j]=='B'&& s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                f=1;
            }
            if (f)
            j+=2;
            else j++;
            
        }
    }
    cout<<s<<endl;
}