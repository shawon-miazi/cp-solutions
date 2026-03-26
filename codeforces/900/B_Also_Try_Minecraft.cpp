#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    long long int prsums[n]={0},prsumr[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i!=0)
        {
            if (arr[i]<arr[i-1])
            {
                prsums[i]=arr[i-1]-arr[i]+prsums[i-1];
            }
            else 
            prsums[i]=prsums[i-1];
        }
    }
    for (int i=n-2;i>=0;i--)
    {
        if (arr[i]<arr[i+1] )
        prsumr[i]=arr[i+1]-arr[i]+prsumr[i+1];
        else 
        prsumr[i]=prsumr[i+1];
    }
    long long int s, t, sum;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        cin >> s >> t;
        
        if (s < t)
        {
            sum=prsums[t-1]-prsums[s-1];
        }
        else
        {
            sum=prsumr[t-1]-prsumr[s-1];
        }
        cout << sum << endl;
    }
    return 0;
}