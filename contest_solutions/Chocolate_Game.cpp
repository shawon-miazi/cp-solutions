#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, sum = 0,b=0,a;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum%2==0)
        {
            for (int i=0;i<n;i++)
            {
                if ((sum-arr[i])%2==0)
                {
                    ans+=arr[i];
                    arr[i]=0;
                }
                else 
                {
                    ans+=(arr[i]-1);
                    arr[i]=1;
                }
            }
            sum-=ans;
        }
        else 
        {
            for (int i=0;i<n;i++)
            {
                if ((sum-arr[i])%2)
                {
                    b+=arr[i];
                    arr[i]=0;
                }
                else 
                {
                    b+=(arr[i]-1);
                    arr[i]=1;
                }
            }
            sum-=b;
        }
        sort(arr.rbegin(),arr.rend());
        while (sum>0)
        {
            for (int i=0;i<n;i++)
            {
                if (arr[i]==0)
                break;
                else 
                {
                    if (sum%2)
                    {
                        sum--;
                    }
                    else 
                    {
                        ans++;
                        sum--;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
