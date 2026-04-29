#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=1,k=(n/2);
        for (int i=0,j=n-1;i<k;i++,j--)
        {
            if (s[i]=='?'&& s[j]=='?')
            {
                f=0;
                break;
            }
        }
        if (n%2==1 && s[k]=='?')
        f=0;
        if (n==1 && s[0]=='?')
        f=0;
        if (f)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
