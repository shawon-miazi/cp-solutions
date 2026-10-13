#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]==0)
            cnt++;
        }
        if (cnt<2)
        cout<<-1<<endl;
        else 
        {
            if (arr[0]==0 && arr[n-1]==0)
            cout<<0<<endl;
            else if (arr[0]==0 || arr[n-1]==0)
            cout<<1<<endl;
            else 
            cout<<2<<endl;

        }
    }
}