#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0, pos = 0, cnt = 0,x=0,y;
        cin >> n;
        vector<int> arr(n), fre(4, 0),fr(4,0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (; pos < n-2; pos++)
        {
            fre[arr[pos]]++;
            x=fre[2]+fre[3];
            if (fre[1] >= x)
            {
                for (int i=0;i<4;i++)
                fr[i]=0;
                for (int i=pos+1;i<n-1;i++)
                {
                    fr[arr[i]]++;
                    y=fr[1]+fr[2];
                    if (y>=fr[3])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if (f)
            break;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}