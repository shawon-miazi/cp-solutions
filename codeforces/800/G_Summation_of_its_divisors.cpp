#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int a,sum=0;
    cin>>a;
    for (int i=1;i<=sqrt(a);i++)
    {
        if (a%i==0)
        {
            if (i!=(a/i))
            sum+=i+(a/i);
            else 
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}