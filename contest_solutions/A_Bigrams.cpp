#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0,cnt=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        cin>>arr[i];
        for (int i=0;i<n;i++)
        {
            if (arr[i]>2)
            f=1;
            if(arr[i]>1)
            cnt++;
        }
        if (f || cnt>1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}