#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0,d,md=INT32_MAX,a,b;
        cin>>n;
        vector<int>arr(n),fre(101,0);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            fre[arr[i]]++;
        }
        for (int i=0;i<101;i++)
        {
            if (fre[i]>1)
            cnt++;
        }
        if (cnt)
        {
            for (int i=0;i<101;i++)
            {
                if (fre[i]>1)
                {
                    for (int j=0;j<n;j++)
                    {
                        if (arr[j]==i)
                        {
                            a=j;
                            break;
                        }
                    }
                    for (int j=n-1;j>=0;j--)
                    {
                        if (arr[j]==i)
                        {
                            b=j;
                            break;
                        }
                    }
                    d=(abs(0-a)+abs(n-1-b));
                    md=min(d,md);
                }
            }
            cout<<md<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }
    }

}
