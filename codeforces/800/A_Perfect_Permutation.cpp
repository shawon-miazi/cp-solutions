#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n], fre[n + 1]={0};
        if (n > 1)
        {
            arr[0]=n;
            for (int j=1;j<n;j++)
            {
                arr[j]=j;

            }
        }
        else if (n==1)
        arr[0]=1;
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
    return 0;
}