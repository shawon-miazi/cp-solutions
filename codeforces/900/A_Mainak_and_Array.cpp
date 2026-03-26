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
        long long int arr[n],max=INT64_MIN,min=INT64_MAX,pair=INT64_MIN,pairf=0,pairl=0;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]>max)
            max=arr[i];
            if (arr[i]<min)
            min=arr[i];
            if (i!=0 && (arr[i-1]-arr[i])>pair)
            pair=arr[i-1]-arr[i];
        }
        pairf=max-arr[0];
        pairl=arr[n-1]-min;
        long long int a=pairf;
        if (pairf<pairl)
        a=pairl;
        if (arr[0]==min || arr[n-1]==max)
        cout<<max-min<<endl;
        else if (a<pair)
        cout<<pair<<endl;
        else 
        cout<<a<<endl;
    }
    return 0;
}