#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=1;
    vector<int>a(4);
    for (int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i=0;i<3;i++)
    {
        if(a[i]!=a[i+1])
        cnt++;
    }
    cout<<4-cnt<<endl;
}