#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a=1;
    cin>>n;
    sum=n;
    for (int i=1;i<n;i++)
    {
        sum+=(n-i)*i;
    }
    cout<<sum<<endl;
    return 0;
}