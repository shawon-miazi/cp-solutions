#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        long long int n,num,nu,val;
        cin>>n;
        if (n%3==0)
        num=n/3;
        else if (n%3!=0)
        {
            if (n>5)
            {
                num=(n/3)+1;
            }
            else 
            {
                num=(n/3)+2;
            }
        }
        if (n%2==0)
        nu=n/2;
        else if (n%2!=0 && n>3)
        {
            nu=n/2;
        }
        else if (n%2!=0 && n<=3)
        {
            nu=(n/2)+2;
        }
        if (nu>num)
        val=num;
        else 
        val=nu;
        cout<<val<<endl;

    }
    return 0;
}