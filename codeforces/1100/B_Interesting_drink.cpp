#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int t;
    cin>>t;
    while (t--)
    {
        int a,cnt=0,m,l=0,r=n-1,ans;
        cin>>a;
        if (a>=arr[n-1])
        cout<<n<<endl;
        else if (a<arr[0])
        cout<<0<<endl;
        else 
        {
            while (l<=r)
            {
                m=(r+l)/2;
                if (arr[m]>a)
                {
                    r=m-1;
                }
                else if (arr[m]<=a)
                {
                    ans=m+1;
                    l=m+1;
                    
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}