#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,pos;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]==n)
            pos=i;
        }
        if(arr[n-1]!=n && arr[0]!=n)
        {
            cout<<-1<<endl;
        }
        else 
        {
            arr.erase(arr.begin()+pos);
            reverse(arr.begin(),arr.end());
            for (int i=0;i<n-1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<n<<endl;
        }
    }
    return 0;
}