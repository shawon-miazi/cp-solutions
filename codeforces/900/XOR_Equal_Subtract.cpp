#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<unsigned long long int >arr(n);
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                unsigned long long int dif=arr[i]-arr[j];
                if (dif<0)
                dif*=-1;
                if ((arr[i]^arr[j])==dif)
                cnt++;
                unsigned long long temp=arr[i]^arr[j];
                cout<<temp<<" ";
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}