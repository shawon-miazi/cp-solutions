#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cntm=0,cntx=0;
        cin >> n;
        vector<int> arr(n);
        cntm=n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i<n-1)
            {
                arr[i]-=1;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]!=0)
            cntx++;
        }
        sum=cntx;
        if (cntx>cntm)
        sum=cntm;
        cout<<sum<<endl;
    }

    return 0;
}