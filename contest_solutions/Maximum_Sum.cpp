#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    long long int n,sum=0,ms=0,k;
	    cin>>n>>k;
	    vector<long long int>arr(n) ;
	    for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i<(n-k))
            sum+=arr[i];
        }
        
        ms=sum;
        for (int i=n-k,j=0;i<n;i++,j++)
        {
            sum+=arr[i];
            sum-=arr[j];
            ms=max(sum,ms);
        }
        cout<<ms<<endl;
	}

}
