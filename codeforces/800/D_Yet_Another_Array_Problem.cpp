#include<bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,flag=1;
        cin>>n; 
        long long int arr[n],min=1000000000000000000,j,g,num;
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
            if (arr[j]<min && arr[j]!=2)
            min=arr[j];
        }
        if (min%2==0)
        j=3;
        else 
        j=2;
        num=min-1;
        for (;j/2<=min;j+=2)
        {
            if (min%j!=0)
            {
                num=j;
                break;
            }
            
        }
        cout<<num<<endl;
    }
    return 0;
}