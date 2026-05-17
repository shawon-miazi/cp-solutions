#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0,c=0,sum=0;
        cin>>n;
        vector<int>arr(n),fre(3,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            fre[arr[i]]++;
            if (arr[i]==0)
            c++;
        }
        int m=min(fre[1],fre[2]);
        sum+=m;
        fre[1]-=m;
        fre[2]-=m;
        sum+=(fre[1]/3);
        sum+=(fre[2]/3);
        cout<<sum+c<<endl;
    }
}