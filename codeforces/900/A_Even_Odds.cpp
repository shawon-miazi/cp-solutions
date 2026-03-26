#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,num;
    cin>>n>>k;
    long long int pos;
    if (n%2==0)
    {
        pos=n/2;
        if (pos<k)
        {
            pos=k-pos-1;
            num=2+(2*pos);
        }
        else
        {
            pos=k-1;
            num=1+(2*pos);
        }
        
    }
    else{
        pos=(n/2)+1;
        
        if (pos<k)
        {
            pos=k-pos-1;
            num=2+(2*pos);
        }
        else
        {
            pos=k-1;
            num=1+(2*pos);
        }
    }
    cout<<num<<endl;
    return 0;
}