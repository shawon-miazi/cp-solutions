#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    long long sum=0;
	    vector<int>arr(7);
	    for (int i=0;i<7;i++)
	    {
	        cin>>arr[i];
	    }
        sort(arr.begin(),arr.end());
        for (int i=0;i<6;i++)
        {
            sum+=(arr[i]*-1);
        }
        sum+=arr[6];
        cout<<sum<<endl;
	}

}
