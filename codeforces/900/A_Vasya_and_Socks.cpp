#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,re,i;
    cin>>n>>m;
    for (i=1,re=0;n>0;n--,i++,re++)
    {
        if (i==m)
        {
            n++;
            i=0;
        }
    }
    cout<<re<<endl;
    return 0;
}