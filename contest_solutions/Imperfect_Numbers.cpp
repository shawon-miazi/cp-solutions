#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n,di,dif;
	    cin>>n;
	    di=(n/2);
	    dif =(n/5);
	    if (n%2==0 && n%5==0)
	    cout<<2<<endl;
	    else if (n%2==0 || n%5==0)
	    cout<<0<<endl;
	    else
	        cout<<1<<endl;
	    
	}

}
