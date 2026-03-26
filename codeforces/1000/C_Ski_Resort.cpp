#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,q,cnt=0,sum=0;
        cin>>n>>k>>q;
        vector <int> arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=q)
            cnt++;
        }
        
    }
    return 0;
}