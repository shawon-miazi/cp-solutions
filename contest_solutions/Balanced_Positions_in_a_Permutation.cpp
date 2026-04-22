#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n;
        int cnt = 0,x=n,ca=0,cb=0;
        vector<int> arr(n),fa(n,0),fb(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i=0;i<n;i++)
        {
            ca=0;
            for (int j=i+1;j<n;j++)
            {
                if (arr[i]<arr[j])
                ca++;
            }
            fa[i]=ca;
        }
        for (int i=0;i<n;i++)
        {
            cb=0;
            for (int j=i-1;j>=0;j--)
            {
                if (arr[j]<arr[i])
                cb++;
            }
            fb[i]=cb;
        }
        for (int i = 0; i < n; i++)
        {
            if (fa[i]==fb[i])
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
