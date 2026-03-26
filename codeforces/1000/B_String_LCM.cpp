#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a,b,s,st;
        cin>>a>>b;
        s=a;
        st=b;
        int x,y;
        x=a.size();
        y=b.size();
        int c=lcm(x,y),n;
        n=c/x;
        for(int i=1;i<n;i++)
        {
            a+=s;
        }
        n=c/y;
        for(int i=1;i<n;i++)
        {
            b+=st;
        }
        if (a==b)
        cout<<a<<endl;
        else 
        cout<<-1<<endl;
    }
    return 0;
}