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
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i=1;i<arr.size();)
        {
            if (arr[i]==arr[i-1])
            {
                arr.erase(arr.begin()+i);
            }
            else if (abs(arr[i]-arr[i-1])<2)
            {
                if (arr[i]<arr[i-1])
                arr.erase(arr.begin()+i);
                else 
                arr.erase(arr.begin()+i-1);
            }
            else 
            i++;
            if (arr.size()==1)
            {
                break;
            }
        }
        if (arr.size()==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}