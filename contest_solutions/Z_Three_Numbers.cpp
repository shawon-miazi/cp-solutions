#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s;
    cin>>k>>s;
    long long int a=0,b=0,c=0,cnt=0,sum=0;
    for (a=0;a<=k;a++)
    {
        for (b=0;b<=k;b++)
        {
            for (c=0;c<=k;c++)
            {
                sum=a+b+c;
                if (sum==s)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}