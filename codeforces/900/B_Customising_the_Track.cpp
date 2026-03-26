#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        long long int sum=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long int x=sum%n;
        long long int re=x*(n-x);
        cout<<re<<endl;
    }
    return 0;
}