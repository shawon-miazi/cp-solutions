#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a1 = 0, a0 = 0, b1 = 0, b0 = 0,ans=0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2)
                    a0++;
                else
                    a1++;
            }
            if (b[i] == '1')
            {
                if (i % 2)
                    b0++;
                else
                    b1++;
            }
        }
        if (a0 == b0 && a1 == b1)
        {
            vector<int>v1,v2;
            for (int i=0;i<n;i+=2)
            {
                if (a[i]=='1')
                v1.push_back(i+1);
                if (b[i]=='1')
                v2.push_back(i+1);
            }
            for (int i=0;i<v1.size();i++)
            {
                ans+=abs(v1[i]-v2[i])/2;
            }
            v1.clear();
            v2.clear();
            for (int i=1;i<n;i+=2)
            {
                if (a[i]=='1')
                v1.push_back(i+1);
                if (b[i]=='1')
                v2.push_back(i+1);
            }
            for (int i=0;i<v1.size();i++)
            {
                ans+=abs(v1[i]-v2[i])/2;
            }
            cout<<ans<<endl;
        }
        else
            cout << -1 << endl;
    }
}