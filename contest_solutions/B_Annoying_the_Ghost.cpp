#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0,g=0,cnt=0;
        cin>>n;
        vector<int>c(n),b(n),a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for (int i=0;i<n;i++)
        {
            int f=1,pos;
            for (int j=i;j<n;j++)
            {
                if (b[i]>=a[j] )
                {
                    f=0;
                    pos=j;
                    break;
                }
            }
            if (f)
            {
                g=1;
                break;
            }
            else 
            {
                for (int j=pos;j>i;j--)
                {
                    swap(a[j],a[j-1]);
                    cnt++;
                }
            }
        }
        if (g)
        {
            cout<<-1<<endl;
        }
        else 
        cout<<cnt<<endl;
    }
}