#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++)
    {
        long long int max=INT64_MIN,min=INT64_MAX;
        if (i!=0)
        min=abs(arr[i]-arr[i-1]);
        if (min>abs(arr[i]-arr[i+1]) && i!=n-1)
        min=abs(arr[i]-arr[i+1]);
        else 
        min=abs(arr[i]-arr[i-1]);
        if (i!=n-1)
        max=abs(arr[i]-arr[n-1]);
        if (abs(arr[i]-arr[0])>max && i!=0)
        max=abs(arr[i]-arr[0]);
        else
        max=abs(arr[i]-arr[n-1]);
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}