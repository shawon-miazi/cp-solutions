#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,f=-1;
        cin>>n;
        vector<pair<int,int>>p;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        cin>>v[i];
        for (int i=1;i<n;i++)
        {
            if (v[i]!=v[0])
            {
                f=i;
                p.push_back({1,i+1});
            }
        }
        if (f!=-1)
        {
            cout<<"YES"<<endl;
            for (int i=1;i<n;i++)
            {
                if (v[i]==v[0])
                {
                    p.push_back({f+1,i+1});
                }
            }
            for (auto x : p)
            {
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
        else
        cout<<"NO"<<endl;
    }
}