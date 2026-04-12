#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=(n/10),b;
        b=n-(a*10);
        if ((n-(a*10))%5==0)
        cout<<a+(b/5)<<endl;
        else 
        cout<<-1<<endl;
    }
}