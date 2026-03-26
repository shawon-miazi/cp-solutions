#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    int flag=1;
    if (a==1)
    flag=0;
    for (int i=2;i<=sqrt(a);i++)
    {
        if (a%i==0)
        {
            flag=0;
            break;
        }
        
    }
    if (flag==0)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
    return 0;
}