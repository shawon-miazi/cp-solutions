#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t;
    cin>>t;
    int flag =1;
    
    for (;t>1;)
    {
        
        if (t%2==1)
        {
            flag=0;
            break;
        }
        t/=2;
    }
    if (flag==0)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
    return 0;
}