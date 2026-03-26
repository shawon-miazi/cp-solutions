#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        if (n==3 && m==3)
        cout<<"2 2"<<endl;
        else if (n>1 && m>3 || m>1 && n>3)
        cout<<n<<" "<<m<<endl;
        else if (n>1 && m==3)
        cout<<"1 2"<<endl;
        else if (m>1 && n==3)
        cout<<"2 1"<<endl;
        else 
        cout<<n<<" "<<m<<endl;
    }
    return 0;
}