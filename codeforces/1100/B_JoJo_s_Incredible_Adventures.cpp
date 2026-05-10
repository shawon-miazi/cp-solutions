#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,cnt=0,mc=0;
        string arr;
        cin>>arr;
        n=arr.size();
        for (int i=0;i<n;i++)
        {
            if (arr[i]=='1')
            {
                cnt++;
            }
            else{
                mc=max(cnt,mc);
                cnt=0;
            }
        }
        mc=max(cnt,mc);
        if (cnt==n)
        {
            cout<<n*n<<endl;
        }
        else 
        {
            cnt=0;
            if (arr[0]=='1' && arr[n-1]=='1')
            {
                for (int i=0;i<n;i++)
                {
                    if (arr[i]=='1')
                    {
                        cnt++;
                    }
                    else break;
                }
                for (int i=n-1;i>=0;i--)
                {
                    if (arr[i]=='1')
                    cnt++;
                    else break;
                }
            }
            mc=max(mc,cnt);
            mc++;
            cout<<((mc/2)*((mc+1)/2))<<endl;
        }
    }
}