#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,f=1,cnt=0;
        cin>>n>>k;
        vector<int>ar(n),fre(10,0);
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
            fre[ar[i]]++;
        }
        for (int i=0,j=n-1,l=n/2;i<l;i++,j--)
        {
            if (ar[i]!=ar[j] && (ar[i]!=k && ar[j]!=k))
            {
                f=0;
            }
        }
        for (int i=1;i<10;i++)
        {
            if (fre[i]%2==1 && i!=k)
            cnt++;
        }
        if (f && !(cnt>1))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
