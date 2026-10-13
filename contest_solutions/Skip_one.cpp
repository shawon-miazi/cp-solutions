#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,sum=0,k,m=INT64_MIN,pos=-1,v=0;
        cin>>n>>k; 
        vector<long long int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for (int i=0;i<n;i++)
        {
            m=max(arr[i],m);
            if ((sum+arr[i])>k && pos==-1)
            {
                sum-=m;
                pos=0;
            }
            if ((sum+arr[i])>k)
            break;
            sum+=arr[i];
            v++;
        }
        cout<<v<<endl;
    }
}
