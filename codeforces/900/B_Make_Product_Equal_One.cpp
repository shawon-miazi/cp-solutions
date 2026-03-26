#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    long long int sum=0,pcnt=0,ncnt=0,zcnt=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]>1)
        {
            sum+=arr[i]-1;
            pcnt++;
            arr[i]=1;
        }
        else if (arr[i]<1 && arr[i]!=0)
        {
            sum+=-1-arr[i];
            ncnt++;
            arr[i]=-1;
        }
        else if (arr[i]==0)
        {
            arr[i]=1;
            zcnt++;
            sum++;
        }
    }
    if (ncnt%2==0 || zcnt!=0)
    cout<<sum<<endl;
    else 
    {
        cout<<sum+2<<endl;
    }
    return 0;
}