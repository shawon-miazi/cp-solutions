#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,max=0,sum;
        cin>>n;
        vector <int> arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]>max)
            max=arr[i];
        }
        sum=max*n;
        cout<<sum<<endl;
    }
    return 0;
}