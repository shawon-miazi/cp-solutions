#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        arr[i]/=2;
        else {
            arr[i]=(arr[i]+f)/2;
            f*=-1;
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}