#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,s=0,a=0,b=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
            if (s>a)
            a=s;
        }
        s=0;
        cin>>m;
        vector<int>ar(m);
        for (int i=0;i<m;i++)
        {
            cin>>ar[i];
            s+=ar[i];
            if (s>b)
            b=s;
        }
        cout<<a+b<<endl;
    }
    return 0;
}