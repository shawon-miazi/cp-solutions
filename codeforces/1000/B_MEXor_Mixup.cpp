#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=a,ans=0;
        if ((a-1)%4==0)
        ans=a-1;
        else if ((a-1)%4==1)
        ans=1;
        else if ((a-1)%4==2)
        ans=a;
        else 
        ans =0;
        
        if ((ans ^ b)==a)
        sum+=2;
        else if (ans==b)
        sum=a;
        else 
        sum+=1;
        cout<<sum<<endl;
    }
    return 0;
}