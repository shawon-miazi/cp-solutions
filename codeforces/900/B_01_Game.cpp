#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        string str;
        cin>>str;
        int n=str.size(),ocnt=0,zcnt=0,min=0;
        sort(str.begin(),str.end());
        for (int i=0;i<n;i++)
        {
            if (str[i]=='0')
            zcnt++;
            else 
            ocnt++;
        }
        min=ocnt;
        
        if (ocnt>zcnt)
        min=zcnt;
        if (min%2==0)
        cout<<"NET"<<endl;
        else if (min%2==1)
        cout<<"DA"<<endl;
    }
    return 0;
}