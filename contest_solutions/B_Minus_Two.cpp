#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),fre(3,0);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            if (v[i]%2==1)
            {
                fre[0]++;
            }
            else{
                if ((v[i]/2)%2==0)
                fre[1]++;
                else 
                fre[2]++;
            }
        }
        int ans=0;
        for (int i=0;i<3;i++)
        ans=max(ans,fre[i]);
        cout<<ans<<endl;
    }
}