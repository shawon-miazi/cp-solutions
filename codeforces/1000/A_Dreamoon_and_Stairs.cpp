#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0,a;
    cin>>n>>m;
    if (n<m)
    cout<<-1<<endl;
    else 
    {
        int di=n/2;
        for (int i=1;p<n;i++)
        {
            a=m*i;
            p=(a*2);
        }
        cout<<a<<endl;
    }
    return 0;
}