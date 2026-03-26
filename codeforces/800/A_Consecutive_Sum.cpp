#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, n, temp, l, j, cnt = 0,m,pos,s=0;
        long long int sum=0;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j <= k; j++)
        {
            temp = arr[j];
            m=j%k;
            for (l = j+1; l < n; l++)
            {
                if (arr[l] > temp && l%k==m)
                {
                    temp = arr[l];
                    pos=l;
                }
            }
            if (temp > arr[j])
            {
                arr[pos] = arr[j];
                arr[j] = temp;
                cnt++;
            }
            if (cnt==k)
            break;
        }
        
        for (int j=0;j<k;j++)
        {
            sum+=arr[j];
        }
       
        cout<<sum<<endl;
    }
    return 0;
}