#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,l;
    cin>>r>>l;
    if((r*2)<=l)
    {
        cout<<"Square"<<endl;
    }
    else if (sqrt(2*l*l)<=(r*2))
    cout<<"Circle"<<endl;
    else 
    cout<<"Complex"<<endl;
    return 0;
}