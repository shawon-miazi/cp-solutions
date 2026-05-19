#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0,f=0;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        f=1;
    }
    if (f)
    cout<<"HARD"<<endl;
    else 
    cout<<"EASY"<<endl;
}