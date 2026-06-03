#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0,f=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum%2==0)
        {
            for (int i=0;i<n;i++)
            {
                if (arr[i]%2==0)
                {
                    f=1;
                    break;
                }
                
            }
        }
        else 
        {
            for (int i=0;i<n;i++)
            {
                if (arr[i]%2==1)
                {
                    f=1;
                    break;
                }
                
            }
        }
        if (f)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
}
