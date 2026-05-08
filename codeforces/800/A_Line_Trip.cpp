#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,m=0;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i>0)
            {
                m=max(m,abs(arr[i]-arr[i-1]));
            }
            else 
            m=arr[i];
        }
        m=max(m,(2*(k-arr[n-1])));
        cout<<m<<endl;
    }
}