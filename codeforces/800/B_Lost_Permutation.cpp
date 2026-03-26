#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int m,s,flag=0,sum=0,max=0;
        cin>>m>>s;
        int arr[m],fre[1005]={0},per=1;
        for (int i=0;i<m;i++)
        {
            cin>>arr[i];
            fre[arr[i]]++;
            if (arr[i]>max)
            max=arr[i];
        }
        for (int i=1;sum<s && i<1005;i++)
        {
            if (fre[i]==0)
            {
                sum+=i;
                fre[i]++;
                if (max<i)
                max=i;
            }
            if (sum==s)
            {
                for (int j=1;j<=max;j++)
                {
                    if (fre[j]==0)
                    per=0;
                }
                flag=1;
                break;
            }
        }
        if(m==1 && s==1 && fre[2]!=1)
        flag=0;
        if (flag==0 || per==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}