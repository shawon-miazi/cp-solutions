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
        int a[n],m[n],sa=0,sm=0,cnta=0,cntm=0,flag=0;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if (i==0)
            {
                sa=a[0];
            }
            else if (i>0)
            {
                sa=sa^a[i];
            }
        }
        for (int i=0;i<n;i++)
        {
            cin>>m[i];
            if (i==0)
            sm=m[i];
            else if (i>0)
            {
                sm=sm^m[i];
            }
        }
        for (int i=n-1;i>=0;i--)
        {
            if (m[i]!=a[i])
            {
                flag=i%2;
                break;
            }
        }
        if (flag==0 && sm!=sa)
        cout<<"Ajisai"<<endl;
        else if (flag==1 && sm!=sa)
        cout<<"Mai"<<endl;
        else 
        cout<<"Tie"<<endl;
    }
    return 0;
}