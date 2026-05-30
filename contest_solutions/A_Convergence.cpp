#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0,x,mc=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i=0,j=n-1,k=n/2;i<k;i++,j--)
        {
            if (arr[i]!=arr[j])
            {
                cnt++;
            }
            else 
            break;
        }
        cout<<cnt<<endl;
    }
}