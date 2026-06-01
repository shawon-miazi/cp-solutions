#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1;
        cin >> n;
        vector<int> arr(n), d,a;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0, j = n - 1; i < (n / 2); i++, j--)
        {
            if (arr[i] != arr[j])
            {
                f = 0;
                d.push_back(arr[i]);
                d.push_back(arr[j]);
                break;
            }
        }
        if (f || n < 3)
            cout << "YES" << endl;
        else 
        {
            for (int i = 0, k = d.size(); i < k; i++) 
            {
                f = 1;
                a=arr;
                a.erase(remove(a.begin(),a.end(),d[i]),a.end());
                for (int j=0,l=a.size()-1,m=a.size();j<(m/2);j++,l--)
                {
                    if (a[j]!=a[l])
                    {
                        f=0;
                        break;
                    }
                }
                if (f)
                {
                    break;
                }
            }
            if (f)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}