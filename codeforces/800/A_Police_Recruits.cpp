#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,a=0,b=0;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==-1)
        a++;
        else 
        b++;
        if (b>0)
        {
           b-=a;
        }
        
        if (b==0 && a>0)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}