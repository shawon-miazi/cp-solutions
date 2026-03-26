#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int j=0;j<t;j++)
    {
        int x,n,sum=0;
        cin>>x>>n;
        for (int i=0;i<n;i++)
        {
            if (i%2==0)
            sum+=x;
            else
            sum-=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}