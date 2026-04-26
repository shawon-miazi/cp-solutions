#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    double a,b,c,d;
	    cin>>a>>b;
	    d=(b/(sin(atan(b/a))));
        c=(a*(tan(acos(a/b))));
        cout<<c<<" "<<d<<endl;
	}

}
