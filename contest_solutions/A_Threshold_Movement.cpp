#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,l=INT32_MAX,r=INT32_MIN;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0,j=1;j<n;i+=2,j+=2)
        {
            l=min(l,arr[i]);
            r=max(r,arr[j]);
        }
        if (n%2==1 || (l-r)<2)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}