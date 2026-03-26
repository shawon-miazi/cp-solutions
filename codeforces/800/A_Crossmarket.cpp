#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n,m,num=0;
        cin>>n>>m;
        if (n==1 && m==1)
        num=0;
        else if (n>m || m==n)
        {
            num=(m-1)*2+n;
        }
        else if (n<m)
        {
            num=(n-1)*2+m;
        }
        cout<<num<<endl;
    }
    return 0;
}