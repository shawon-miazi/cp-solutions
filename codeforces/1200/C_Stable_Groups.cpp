#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,x;
    cin>>n>>k>>x;
    vector<long long int>v(n),dif;
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++)
    {
        if (i>0 && (abs(v[i]-v[i-1]))>x)
        {
            dif.push_back(abs(v[i]-v[i-1]));
        }
    }
    sort(dif.rbegin(),dif.rend());
    for (int i=dif.size()-1;i>=0 && k>0 ;)
    {
        long long int a=(dif[i]/x);
        if (dif[i]%x==0)
        a=(dif[i]/x)-1;
        if (a>k)
        break;
        else 
        {
            dif.pop_back();
            k-=a;
            i--;
        }
    }
    cout<<dif.size()+1<<endl;
}