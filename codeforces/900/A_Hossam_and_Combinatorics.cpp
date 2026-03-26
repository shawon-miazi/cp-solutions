#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int cnt=0;
        vector<int >arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int max=arr[n-1],min=arr[0],di,dif,cntm=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==min)
            cnt++;
            if (arr[i]==max)
            cntm++;
        }
        if (max!=min)
        cout<<cnt*cntm*2<<endl;
        else 
        cout<<n*(n-1)<<endl;
    }
    return 0;
}