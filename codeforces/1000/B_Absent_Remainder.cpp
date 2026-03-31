#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        a=floor(n/2.0);
        for (int i=0,j=n-1,m=0;m<a;i++,m++)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }

    }
    return 0;
}