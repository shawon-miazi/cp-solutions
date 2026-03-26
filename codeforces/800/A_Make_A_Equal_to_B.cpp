#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,cnt=0,num=0;
        cin>>n;
        int arr[n],ar[n],flag=0,fre[2]={0},fr[2]={0};
        for (int j=0;j<n;j++)
        {
            cin>>arr[j];
            fre[arr[j]]++;
        }
        for (int j=0;j<n;j++)
        {
            cin>>ar[j];
            fr[ar[j]]++;
        }
        for (int j=0;j<n;j++)
        {
            if (arr[j]!=ar[j])
            cnt++;
        }
        int x,y;
        x=abs(fre[0]-fr[0]);
        y=abs(fre[1]-fr[1]);
        num=x;
        if (cnt>x)
        num=x+1;
        cout<<num<<endl;

    }
    return 0;
}