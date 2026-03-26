#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,ant=0,cnt=0,num=0,c=0;
        cin>>n>>a;
        vector<int>arr(a);
        for (int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for (int i=0,j=a-1;i<a;i++)
        {
            cnt+=(n-arr[i]);
            c++;
            for (;j>=0;j--)
            {
                if (arr[j]>cnt || j<=i)
                break;
                else 
                {
                    num++;
                }
            }
            if (j<=i || i>=j)
            break;
        }
        cout<<c<<endl;
    }
}