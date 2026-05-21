#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for (int i=0,j=1;i<n;i++,j+=2)
	    {
            arr[i]=j;
	        cout<<arr[i]<<" ";
	    }
        cout<<endl;
	}
}
