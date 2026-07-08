#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n,f=0,cnt=0,m=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for (int i=0;i<n;i++)
	    {
	        if (f==0 && (s[i]=='u'|| s[i]=='o'))
            {
                cnt++;
                f=1;
            }
            else if (f==1 && s[i]=='w')
            {
                cnt++;
                f=0;
            }
	        else 
            {
                if (cnt%2==0)
                cnt=0;
                m=max(m,cnt);
                cnt=0;
                f=0;
            }
	    }
        if (cnt%2==0)
        cnt=0;
        m=max(cnt,m);
        cout<<m<<endl;
	}
    


}
