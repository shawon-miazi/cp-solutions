#include<bits/stdc++.h>/
using namespace std;
int main()
{
    double x,y,r;
    int t;
    cin>>x>>y>>r>>t;
    double a,b;
    double dis,i,j;
    for (int w=0;w<t;w++)
    {
        cin>>a>>b;
        i=a-x;
        j=b-y;
        dis=sqrt((i*i)+(j*j));
        if (dis<=r)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}