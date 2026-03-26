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
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0,max=arr[0];
        for (int i=0;i<n;i++)
        {
            if (max>arr[i])
            cnt++;
            else 
            max=arr[i];
        }
        cout<<cnt<<endl;
    }
    return 0;
}