#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p=0,a;
    cin>>n;
    a=n;
    while (n>1)
    {
        if (n%2==0)
        {
            n/=2;
        }
        else 
        {
            n--;
            p++;
        }
    }
    cout<<p+1<<endl;
    return 0;
}