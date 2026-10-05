#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        long long int n,f=0,mc=INT64_MAX,c;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i>0 && arr[i]<arr[i-1])
            f=1;
            if (i>0)
            {
                c=abs(arr[i]-arr[i-1]);
                mc=min(mc,c);
            }
        }
        if (f)
        cout<<0<<endl;
        else 
        {
            if (mc%2==0)
            cout<<(mc/2)+1<<endl;
            else 
            cout<<(int)ceil(mc/2.0)<<endl;
        }
    }
}