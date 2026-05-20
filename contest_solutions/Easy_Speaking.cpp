#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int n,f=0,cnt=0,g=0;
        cin>>n;
        string s;
        cin>>s;
        vector<char>m={'a', 'e', 'i', 'o', 'u'};
        for (int i=0;i<n-3;i++)
        {
            cnt=0;
            for (int j=i;j<i+4;j++)
            {
                f=0;
                for (int k=0,l=m.size();k<l;k++)
                {
                    if (s[j]==m[k])
                    {
                        f=1;
                    }
                }
                if (f==0)
                cnt++;
            }
            if (cnt>3)
            {
                g=1;
                break;
            }
        }
        if (g)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }

}
