#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,l=-1,r=-1,f=1;
        cin>>n;
        vector<int>arr(n),p;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]!=i+1)
            {
                p.push_back(i);
            }
        }
        for (int i=0,j=p.size()-1;i<j;i++,j--)
        {
            swap(arr[p[i]],arr[p[j]]);
        }
        for (int i=1;i<n;i++)
        {
            if (arr[i-1]>arr[i])
            f=0;
        }
        if (f)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}