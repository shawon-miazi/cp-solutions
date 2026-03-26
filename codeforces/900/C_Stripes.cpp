#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k=0;k<t;k++)
    {
        char str[8][8];
        int rflag=1,bflag=1;
        for (int i=0;i<8;i++)
        {
            for (int j=0;j<8;j++)
            {
                cin>>str[i][j];
            }
        }
        for (int i=0;i<8;i++)
        {
            if (str[i][0]=='R')
            {
                for (int j=0;j<8;j++)
                {
                    if (str[i][j]!='R')
                    {
                        rflag=0;
                    }
                }
                if (rflag==1)
                {
                    cout<<'R'<<endl;
                    break;
                }
                else
                rflag=1;
            }
        }
        for (int i=0;i<8;i++)
        {
            if (str[0][i]=='B')
            {
                for (int j=0;j<8;j++)
                {
                    if (str[j][i]!='B')
                    {
                        bflag=0;
                    }
                }
                if (bflag==1)
                {
                    cout<<'B'<<endl;
                    break;
                }
                else
                bflag=1;
            }
        }
    }
    return 0;
}