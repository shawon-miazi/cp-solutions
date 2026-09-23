#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0;
        cin>>n;
        vector<int>arr(n);
        map<long long int ,long long int>m;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i%2)
            arr[i]*=-1;
        }
        m[0]=1;
        long long int sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
            if (m[sum])
            {
                f=1;
            }
            m[sum]++;
        }
        if (f)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}