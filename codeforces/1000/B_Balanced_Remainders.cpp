#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, pos, va, f = 0,k=0;
        cin >> n;
        vector<int> arr(n), c(3, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i] % 3]++;
        }
        
        while (1)
        {
            f=0;
            for (int i = 0; i < 3; i++)
            {
                if (c[i] > (n / 3))
                {
                    pos = i;
                    va = c[i] - (n / 3);
                    f = 1;
                    k=i+1;
                    if (k>2)
                    k=0;
                    c[k]+=va;
                    c[i]-=va;
                    cnt+=va;
                }
            }
            if (f==0)
            break;
        }
        cout << cnt << endl;
    }
    return 0;
}