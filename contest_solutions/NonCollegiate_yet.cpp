#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ca=1;
    cin>>t;
    while (t--)
    {
        long long int a,b,cnt=0;
        cin>>a>>b;
        for (long long int i=a,j;i<=b;i++)
        {
            j=sqrt(i);
            if (sqrt(i)==j)
            {
                cnt++;
            }
        }
        cout<<"Case "<<ca<<" : "<<cnt<<endl;
        ca++;
    }
}