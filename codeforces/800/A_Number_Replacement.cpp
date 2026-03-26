#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int w=0;w<t;w++)
    {
        int n,flag=1,j;
        cin>>n;
        vector<int>arr;
        int fre[55]={0};
        char str[55];
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
            fre[arr[i]]++;
        }
        cin>>str;
        for ( j=0;j<55;j++)
        {
            int f=0;
            char q;
            
            if (fre[j]>1)
            {
                for (int i=0;i<n;i++)
                {
                    if (arr[i]==j && f==0)
                    {
                        
                        q=str[i];
                        f++;
                       
                    }
                    if (arr[i]==j && str[i]!=q)
                    {
                        flag=0;
                    }

                }
            }
        }
        if (flag==0)
        cout<<"NO"<<endl;
        else if (flag==1)
        cout<<"YES"<<endl;
    }
    return 0;
}