#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,ans;
	cin>>x>>y>>z;
	if (z>50)
	{
	    ans=(x+(z-50)*y);
	}
	else ans=x;
    cout<<ans<<endl;
}
