#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int flag=10,pos=0;
    while (getline(cin,a))
    {
        for (int i=0;a[i];i++)
        {
            if (a[i]=='/')
            {
                flag=1;
                pos=i;
            }
            
            else if (a[i]=='%')
            {
                flag=0;
                pos=i;
            }
        }
        string x,y;
        
    }
    return 0;
}