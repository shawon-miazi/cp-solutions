#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int n, m;
        cin >> n >> m;
        int a = m;
        a *= 2;
        int arr[a],flag=1;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        if (m>=n)
        flag=0;
        if (flag==0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}