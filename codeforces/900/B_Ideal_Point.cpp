#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,flag=0;
        cin>>n>>k;
        int arr[n],ar[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i]>>ar[i];
            if (k>=arr[i] && k<=ar[i])
            flag=1;
        }
        if (flag==1 && n!=1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}