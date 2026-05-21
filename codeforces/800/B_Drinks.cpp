#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,b,cnt=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        b+=a;
    }
    cout<<fixed<<setprecision(12)<<(b/n)<<endl;
}