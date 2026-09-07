#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q,x=0;
        cin>>n;
        vector<int>arr(n),v,a(n);
        for (int i=0,j=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]!=x)
            {
                v.push_back(i+1);
                x=arr[i];
                j++;
            }
            a[i]=j;
        }
        // for (auto i : a)
        // cout<<i<<" ";
        // cout<<endl;
        // for (auto i : v)
        // cout<<i<<" ";
        // cout<<endl;
        cin>>q;
        while (q--)
        {
            int l=-1,r=-1;
            cin>>l>>r;
            int v1=a[l-1],v2=a[r-1];
            if (v1==v2)
            cout<<-1<<" "<<-1<<endl;
            else 
            {
                cout<<l<<" "<<v[v1]<<endl;
            }
        }
        cout<<endl;
    }
}