#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a,b;
    int cnt,flag=0,n1,n2;
    while (t--)
    {
        cin>>a>>b;
        n1=a.size();
        n2=b.size();
        cnt=0;
        vector <int >arr(n2,0),ar(n2,0),fre(26,0);
        for (int i=0;i<n2;i++)
        {
            fre[b[i]-'A']++;
        }
        flag=1;
        for (int i=0;i<n2;i++)
        {
            for (int j=n1-1;j>=0;j--)
            {
                if (b[i]==a[j] && fre[b[i]-'A']==1)
                {
                    arr[i]=j;
                    ar[i]=j;
                    cnt++;
                    break;
                }
                else if (b[i]==a[j] && fre[b[i]-'A']>1)
                {
                    fre[b[i]-'A']--;
                }
            }
        }
        sort(ar.begin(),ar.end());
        for (int i=0;i<n2;i++)
        {
            if (arr[i]!=ar[i])
            {
                flag=0;
            }
        }
        // for (int i=0;i<n2;i++)
        // cout<<arr[i]<<"-"<<ar[i]<<" ";
        
        if (flag==0 || cnt<n2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}