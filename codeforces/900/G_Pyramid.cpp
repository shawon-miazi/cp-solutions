#include<bits/stdc++.h>
using namespace std;
int  prit(int n)
{
    if (n==1) return 1;
    else 
    return prit(n-1)+2;
    for (int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    prit(n);
    return 0;
}