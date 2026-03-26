#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,iv=1,ans=0;
    cin>>n>>m;
    vector<int> arr(m);
    for (int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<m;i++)
    {
        if (arr[i]>iv)
        {
            ans+=(arr[i]-iv);
            iv=arr[i];
        }
        else if (arr[i]<iv)
        {
            ans+=(n-iv)+1+(arr[i]-1);
            iv=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}