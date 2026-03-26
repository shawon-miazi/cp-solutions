#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int min=arr[0],max=arr[n-1],cnt=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>min && arr[i]<max)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}