#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,f=0,cnt=0;
        cin>>n>>a;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]>a && f==0)
            {
                cnt++;
                f=1;
            }
            else if (arr[i]<=a && f==1)
            {
                cnt++;
                f=0;
            }
        }
        cout<<cnt<<endl;
    }
}