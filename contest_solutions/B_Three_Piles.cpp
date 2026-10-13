#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if (a>=b)
        {
            cout<<((a+c)-b)<<endl;
        }
        else 
        {
            if (((a+c)-b) > (b-a))
            cout<<((a+c)-b)<<endl;
            else 
            cout<<b-a<<endl;
        }
    }
}