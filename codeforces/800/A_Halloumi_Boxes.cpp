#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,f=1;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i>0 && arr[i]<arr[i-1])
            f=0;
        }
        if (k>1 || f)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}