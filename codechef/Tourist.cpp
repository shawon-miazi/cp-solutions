#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b,mind=INT32_MAX,dis;
        cin>>n>>a>>b;
        vector<vector<int>>arr(n,vector<int>(2));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
            dis=(abs(arr[i][0]-a)+abs(arr[i][1]-b));
            if (dis<mind)
            mind=dis;
        }
        cout<<mind<<endl;
    }
}
