#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        long long int x=0,f=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==x)
            {
                f=1;
                break;
            }
            else 
            x=arr[i];
        }
        if (f)
        cout<<-1<<endl;
        else 
        {
            for (int i=0;i<n;i++)
            cout<<arr[i]<<' ';
            cout<<endl;
        }
    }

}