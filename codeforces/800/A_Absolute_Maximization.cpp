#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        long long int max=0,min=0;
        int n;
        cin>>n;
        vector <int > arr(n);
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        max=arr[0] | arr[1];
        min= arr[0] & arr[1];
        for (int j=2;j<n;j++)
        {
            max=(max | arr[j]);
            min=( min & arr[j]);
        }
        cout<<max-min<<endl;
        
    }
    return 0;
}