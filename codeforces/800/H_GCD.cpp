#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if (x>y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    unsigned long long int i=x,k=y;
    unsigned long long int r=y,a;
    while (r!=0)
    {
        r=y%x;
        y=x;
        x=r;
    }
    a=(i*k)/y;
    cout<<y<<" "<<a<<endl;
    return 0;
}