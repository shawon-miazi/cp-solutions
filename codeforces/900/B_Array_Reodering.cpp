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
        int arr[n],cnte=0,cnto=0,flag=0;
        vector <int>e(n,0),o(n,0);
        for (int i=0,j=0,k=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0)
            {
                e[j]=arr[i];
                j++;
                cnte++;
            }
            else 
            {
                o[k]=arr[i];
                k++;
                cnto++;
            }
        }
        if (cnte==cnto)
        {
            
        }
    }
    return 0;
}