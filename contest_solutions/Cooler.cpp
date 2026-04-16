#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n,k,sum=0;
	    cin>>n>>k;
	    for (int i=n;i>k;i--)
	    {
	        sum+=i;
	    }
	    cout<<sum<<endl;
	}

}
