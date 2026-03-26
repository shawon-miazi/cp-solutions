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
        long long int sum=0;
        vector<int >a(n);
        vector<pair<int,int>>b(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i].first;
            b[i].second=i;
        }
        sort(b.begin(),b.end());
        for (int i=0,j;i<n;i++)
        {
            j=b[i].second;
            if (i!=0 && i!=n-1)
            {
                a[j-1]+=b[i].first;
                a[j+1]+=b[i].first;
                sum+=a[j];
                a.erase(a.begin()+j);
            }
            else if (i==0)
            {
                a[j+1]+=b[i].first;
                sum+=a[j];
                a.erase(a.begin()+j);
            }
            else if (i==(n-1))
            {
                a[j-1]+=b[i].first;
                sum+=a[j];
                a.erase(a.begin()+j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}