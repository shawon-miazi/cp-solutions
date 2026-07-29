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
        sort(arr.begin(),arr.end());
        int mn=arr[0],mx=arr[n-1],cnt=0,c=0,num=0,x,va=arr[0];
        for (int i=0;i<n;)
        {
            x=arr[i];
            c=0;
            while (arr[i]==x && i<n)
            {
                c++;
                i++;
            }
            if (va==x)
            {
                if (c>cnt)
                num+=(c-cnt);
                va++;
            }
            else 
            {
                num+=c;
                va=x+1;
            }
            cnt=c;
        }
        cout<<num<<endl;
    }
}