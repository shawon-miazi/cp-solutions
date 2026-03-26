#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n,d;
        cin>>n;
        if (n%3==0)
        {
            d=n/3;
            cout<<d<<" "<<d+1<<" "<<d-1<<endl;
        }
        else if (n%3==1)
        {
            d=n/3;
            cout<<d<<" "<<d+2<<" "<<d-1<<endl;
        }
        else
        {
            d=n/3;
            cout<<d+1<<" "<<d+2<<" "<<d-1<<endl;
        }
    }
    return 0;
}