#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int>ar(n);
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for (int i=0;i<n-1;i++)
        {
            if (abs(ar[i]-ar[i+1])==__gcd(ar[i],ar[i+1]))
            cnt++;
        }
        cout<<cnt<<endl;
    }
}