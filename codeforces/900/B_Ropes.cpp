#include<bits/stdc++.h>
using namespace std;
double n,k;
vector<int>arr;
int sum;
bool ok(double x)
{
    sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=floor(arr[i]/x);
    }
    return sum>=k;
}
int main()
{
    cin>>n>>k;
    arr.resize(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double l=0,r=INT32_MAX,m;
    cout<<setprecision(20);
    for (int i=0;i<100;i++)
    {
        m=(l+r)/2;
        if (ok(m))
        {
            l=m;
        }
        else 
        {
            r=m;
        }
    }
    cout<<l<<endl;
    return 0;
}