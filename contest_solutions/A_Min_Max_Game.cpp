#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c1=0,c0=0,f=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]==1)
            c1++;
            else 
            c0++;
        }
        while (c1 && c0)
        {
            if (f==0 && c0)
            {
                c0--;
                f=1;
            }
            else if (f && c1)
            {
                c1--;
                f=0;
            }
        }
        if (c0)
        cout<<"Elsie"<<endl;
        else 
        cout<<"Bessie"<<endl;
    }
}