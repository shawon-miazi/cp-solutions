#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int x=1,y=1,flag=1;
        while(x!=a || y!=b)
        {
            if (flag==1)
            {
                if (y!=b)
                {
                    if ((b-y)%2==1)
                    y+=(b-y);
                    else 
                    y+=(b-y-1);
                }
                else
                {
                    if ((a-x)%2==1)
                    x+=(a-x);
                    else 
                    x+=(a-x-1);
                }
                flag=0;
            }
            else if (flag==0)
            {
                if (y!=b)
                {
                    if ((b-y)%2==1)
                    y+=(b-y);
                    else 
                    y+=(b-y-1);
                }
                else 
                {
                    if ((a-x)%2==1)
                    x+=(a-x);
                    else 
                    x+=(a-x-1);
                }
                flag=1;
            }
        }
        if (flag==1)
        cout<<"Tonya"<<endl;
        else if (flag==0)
        cout<<"Burenka"<<endl;
    }
    return 0;
}