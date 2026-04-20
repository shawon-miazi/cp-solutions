#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,f=0,cnt=0;
        cin>>n>>a;
        for (int i=0;i<a;i++)
        {
            if (n<1000)
            {
                n+=1000;
            }
            else 
            n*=2;
        }
        cout<<n<<endl;
    }
}