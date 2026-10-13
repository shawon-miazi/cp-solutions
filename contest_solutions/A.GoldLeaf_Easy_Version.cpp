#include<bits/stdc++.h>
using namespace std;
struct part
{
    int a;
    string s;
};
part cmp()
{
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        part arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i].a>>arr[i].s;
        }
        sort(arr.begin(),arr.end(),cmp);
    }
}