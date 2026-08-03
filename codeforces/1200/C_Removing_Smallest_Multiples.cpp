#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;(i*j)<=n;j++)
            {
                if (s[(i*j)-1]=='0')
                {
                    sum+=i;
                    s[(i*j)-1]='2';
                }
                else if (s[(i*j)-1]=='1')
                break;
            }
            // cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}