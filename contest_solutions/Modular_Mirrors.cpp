#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if (n==1 || n==3)
        cout<<-1<<endl;
        else if (n==2)
        cout<<m-1<<" "<<m-1<<endl;
        else 
        {
            if (n%2==0)
            cout<<-1<<endl;
            else 
            {
                for (int i=0,j=n/2;i<n;i++)
                {
                    if (i<j)
                    cout<<1<<" ";
                    else if (i==j)
                    cout<<0<<" ";
                    else 
                    cout<<m-1<<" ";
                }
                cout<<endl;
            }
        }
    }
}