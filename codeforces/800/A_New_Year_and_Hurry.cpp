#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1,x,cnt=0;
    cin>>n>>k;
    k=240-k;
    while (1)
    {
        x=(5*i);
        k-=x;
        if (k<0)
        break;
        i++;
        cnt++;
    }
    if (cnt>n)
    cout<<n<<endl;
    else 
    cout<<cnt<<endl;
}