#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double x3,y3,x4,y4;
    cin>>x3>>y3>>x4>>y4;
    int t,flag=1;
    cin>>t;
    double a,b;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        if ( a>x1 && a>x2 && a>x3 && a>x4 || b>y1 && b>y2 && b>y3 && b>y4 || a<x1 && a<x2 && a<x3 && a<x4 || b<y1 && b<y2 && b<y3 && b<y4 )
        flag=0;
        else 
        flag=1;
        if (flag==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        
    }
    return 0;
}