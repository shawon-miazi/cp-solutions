#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int i=(x1*(y2-y3))-(y1*(x2-x3))+((x2*y3)-(y2*x3));
    if (i==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}