#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cnt=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        if (abs(a-b)>1)
        cnt++;
    }
    cout<<cnt<<endl;
}