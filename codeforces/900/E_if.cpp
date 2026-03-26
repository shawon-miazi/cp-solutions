#include<bits/stdc++.h>
using namespace std;
struct a
{
    int k,l;
};
bool comp(a x,a y)
{
    if (x.l)
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        a ob[n];
        for (int i=0;i<n;i++)
        {
            cin>>ob[i].k>>ob[i].l;
        }
        sort(ob,ob+n,comp);
    }
    return 0;
}