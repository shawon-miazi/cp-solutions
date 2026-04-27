#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if (a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n>>a;
        vector<int>arr(n);
        vector<pair<int,int>>ar(n);
        for (int i=0;i<n;i++)
        {
            cin>>ar[i].first;
            ar[i].second=i+1;
        }
        sort(ar.begin(),ar.end());
        for (int i=0;i<n;i++)
        {
            ar[i].first=(ar[i].first %a);
        }
        sort(ar.begin(),ar.end());
        for (int i=0;i<n;i++)
        {
            if (ar[i].first==0)
            {
                cout<<ar[i].second<<" ";
            }
        }
        sort(ar.begin(), ar.end(), cmp);
        for (int i=0;i<n;i++)
        {
            if (ar[i].first!=0)
            {
                cout<<ar[i].second<<" ";
            }
        }
        cout<<endl;
    }
}