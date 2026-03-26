#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector <int >a(n),b(n),c(n);
        vector<pair<int ,int>> arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=i;
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++)
        {
            a[arr[i].second]=b[i];
        }
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}