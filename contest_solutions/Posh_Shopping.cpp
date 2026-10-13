#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0,mx=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(arr[i],mx);
        }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if ((i!=j) && (arr[i]<=arr[j]) && ((arr[i]+arr[j])>sum))
                {
                    sum=arr[i]+arr[j];
                }
            }
        }
        if (sum && sum>mx)
        cout<<sum<<endl;
        else 
        cout<<mx<<endl;
    }
}
