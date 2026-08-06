#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, ans = 0,c0=0,c1=0;
        cin >> n;
        vector<vector<char>> arr(n, vector<char>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                c0=0,c1=0;
                if (arr[i][j]=='0')
                c0++;
                else 
                c1++;
                if (arr[j][n-1-i]=='0')
                c0++;
                else 
                c1++;
                if (arr[n-1-i][n-1-j]=='0')
                c0++;
                else 
                c1++;
                if (arr[n-1-j][i]=='0')
                c0++;
                else 
                c1++;
                if (c0==0 || c1==0)
                ans+=0;
                else 
                {
                    if (c0<c1)
                    {
                        ans+=c0;
                        arr[i][j]='1';
                        arr[j][n-1-i]='1';
                        arr[n-1-i][n-1-j]='1';
                        arr[n-1-j][i]='1';
                    }
                    else 
                    {
                        ans+=c1;
                        arr[i][j]='0';
                        arr[j][n-1-i]='0';
                        arr[n-1-i][n-1-j]='0';
                        arr[n-1-j][i]='0';  
                    }
                }
                
            }
        }
        cout << ans << endl;
    }
}
