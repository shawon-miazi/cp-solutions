#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,f=1;
        cin>>n;
        vector<long long int>v(n);
        vector<pair<int,int>>vp(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            vp[i].first=v[i];
            vp[i].second=i+1;
            if (i>0 && v[i]<v[i-1])
            f=0;
        }
        if (v[n-2]>v[n-1])
        cout<<-1<<endl;
        else 
        {
            if (v[n-1]<0)
            {
                if (f)
                cout<<0<<endl;
                else 
                cout<<-1<<endl;
            }
            else 
            {
                cout<<n-2<<endl;
                for (int i=0;i<n-2;i++)
                {
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
            }
        }
    }
}