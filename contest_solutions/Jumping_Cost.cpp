#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0;
        cin>>n;
        vector<int>arr(n+1);
        for (int i=1,pos=1;i<=n;i++)
        {
            cin>>arr[i];
            if (i>1 &&( (arr[i]-i+pos)>=0 || ((arr[i]-i+pos)<0 && ((arr[i]-i+pos)*-1)<=i)))
            {
                sum+=arr[i]-i+pos;
                pos=i;
            }
        }
        cout<<sum<<endl;
    }
}