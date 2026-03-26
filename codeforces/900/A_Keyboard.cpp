#include<bits/stdc++.h>
using namespace std;
int main()
{
    char m;
    cin>>m;
    string str,st[3],re="";
    cin>>str;
    st[0]="qwertyuiop";
    st[1]="asdfghjkl;";
    st[2]="zxcvbnm,./";
    for (int i=0;str[i];i++)
    {
        if (m=='R')
        {
            for (int j=0;j<3;j++)
            {
                for (int k=0;st[j][k];k++)
                {
                    if (st[j][k]==str[i])
                    {
                        if ( k!=0)
                        re+=st[j][k-1];
                        else 
                        re+=st[j][k];
                    }
                }
            }
        }
        else
        {
            for (int j=0;j<3;j++)
            {
                for (int k=0;st[j][k];k++)
                {
                    if (st[j][k]==str[i])
                    {
                        if (k!=9)
                        re+=st[j][k+1];
                        else 
                        re+=st[j][k];
                    }
                }
            }
        }
    }
    cout<<re<<endl;
}