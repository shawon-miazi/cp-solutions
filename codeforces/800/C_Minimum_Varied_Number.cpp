#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n,a=0;
        cin>>n;
        for (int c=n,j=9,b=9,k=1;c>0 && b>0;j--,k*=10,b--)
        {
            
            if (b>c)
            {
                for (;b>c;b--)
                {

                }
            }
            
            c-=b;
            j=b;
            j*=k;
            a+=j;
        }
        cout<<a<<endl;
    }
    
    return 0;
}