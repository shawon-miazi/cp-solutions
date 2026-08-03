#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        vector<int>arr(n),ar(m);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<m;i++)
        {
            cin>>ar[i];
        }
        if (n<(2*m))
        cout<<"NO"<<endl;
        else 
        {
            sort(arr.begin(),arr.end());
            sort(ar.begin(),ar.end());
            for (int i=0,j=0;i<m;i++)
            {
                for (;j<n;j++)
                {
                    if (arr[j]<ar[i])
                    {
                        arr[j]=-1;
                        j++;
                        break;
                    }
                }
            }
            for (int i=0,j=0;i<m;i++)
            {
                for (;j<n;j++)
                {
                    // cout<<arr[j]<<" ";
                    if (arr[j]>ar[i])
                    {
                        arr[j]=-1;
                        break;
                    }
                }
            }
            for (int i=0;i<n;i++)
            {
                
                if (arr[i]==-1)
                cnt++;
            }
            if (cnt==(2*m))
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
}