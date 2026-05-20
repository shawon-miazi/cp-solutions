#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=-1;
        cin >> n;
        vector<int> arr(n),ar,fre(1001,0);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            fre[arr[i]]=i+1;
        }
        for (int i=1;i<1001;i++)
        {
            if (fre[i]==0)
            continue;
            for (int j=1;j<1001;j++)
            {
                if (fre[j]==0)
                continue;
                if (__gcd(i,j)==1)
                {
                    ans=max(ans,(fre[i]+fre[j]));
                }
            }
        }
        cout<<ans<<endl;
    }
}