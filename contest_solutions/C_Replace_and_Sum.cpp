#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q, l, r, f=0,sum=0,ans;
        cin >> n >> q;
        vector<long long int> a(n), b(n),fs(n+1,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                a[i] = b[i];
            if (a[i]< a[i+1] && i<n-1)
            a[i] = a[i + 1];
        }
        while (f == 0)
        {
            f = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    a[i] = a[i + 1];
                    f=0;
                }
                    
            }
        }
        for (int i=1,j=0;i<n+1;i++,j++)
        {
            sum+=a[j];
            fs[i]=sum;
        }
        while (q--)
        {
            cin>>l>>r;
            ans=fs[r]-fs[l-1];
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}