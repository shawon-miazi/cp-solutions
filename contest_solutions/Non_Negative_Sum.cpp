#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum=0,cnt=0;
	    cin>>n;
	    vector<int>arr(n);
	    for (int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end(),greater<int>());
	    for (int i=0;i<n;i++)
	    {
	        if(arr[i]+sum>=0)
	        {
	            cnt++;
	            sum+=arr[i];
	        }
	        else 
	        break;
	    }
	    cout<<cnt<<endl;
	}

}