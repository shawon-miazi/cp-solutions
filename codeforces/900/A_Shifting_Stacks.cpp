
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

 
int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
      int n,flag=1;
      cin>>n;
      int arr[n];
      long long int isum=0,b=0,c=0;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
        isum+=arr[i];
        if (arr[i]>i)
        b+=arr[i]-i;
        if(arr[i]<i)
        {
          c=i-arr[i];
          if (b<c)
          {
            flag=0;
          }
          else
          b-=c;
        }
      }
      long long int a=n-1;
      long long int sum=(a*(a+1))/2;
      if(isum>=sum && flag==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;                       
    }
    return 0;
}