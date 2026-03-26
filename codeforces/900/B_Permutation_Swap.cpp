#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,max=0;
        cin>>n;
        vector<int> arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            max=__gcd(max,abs(arr[i]-i-1));
        }
        cout<<max<<endl;
    }
    return 0;
}