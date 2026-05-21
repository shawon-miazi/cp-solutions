#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cnt=1;
    cin>>n;
    vector<string>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (i>0 && arr[i]!=arr[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}