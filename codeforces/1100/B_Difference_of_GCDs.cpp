#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r,cnt=0;
        cin >> n >> l >> r;
        vector<int> arr(n,0);
        for (double i = 1; i <= n; i++)
        {
            arr[i-1]=ceil(l/i)*i;
            if (arr[i-1]>r)
            cnt++;
        }
        if (cnt==0)
        {
            cout<<"YES"<<endl;
            for (int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        else 
        cout<<"NO"<<endl;
    }
}