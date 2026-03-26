#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n,a,min=210,v1=0;
        cin>>n>>a;
        vector<string> str(n);
        for (int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                v1=0;
                for (int k=0;k<a;k++)
                {
                    v1+=(int)abs(str[i][k]-str[j][k]);
                }
                if (v1<min)
                min=v1;
            }
        }
        cout<<min<<endl;
    }
}