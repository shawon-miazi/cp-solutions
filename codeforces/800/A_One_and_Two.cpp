#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,cnt=0,num=0,j;
        cin>>n;
        vector<int>arr;
        for (int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
            if (arr[j]==2)
            cnt++;
        }
        if (cnt!=0 && cnt%2==1)
        cout<<"-1"<<endl;
        else if (cnt==0)
        cout<<"1"<<endl;
        else if (cnt !=0 && cnt%2==0)
        {
            for (j=0;j<n;j++)
            {
                if (arr[j]==2)
                num++;
                if (num==(cnt/2))
                break;
            }
            cout<<j+1<<endl;
        }
    }
    return 0;
}