#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
        string s="";
	    int n,a=0,cnt;
	    cin>>n;
	    vector<int>arr(n);
	    for (int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for (int i=0;i<31;i++)
        {
            cnt=0;
            for (int j=0;j<n;j++)
            {
                if (arr[j]&1==1)
                {
                    cnt++;
                    arr[j]=arr[j]>>1;
                }
                else 
                arr[j]=arr[j]>>1;
            }
            if (cnt%2==0)
            {
                s+='0';
            }
            else 
            s+='1';
        }
        // reverse(s.begin(),s.end());
        cout<<s<<endl;
	}

}
