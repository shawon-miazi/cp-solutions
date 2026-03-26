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
        if (n==1)
        cout<<1<<endl;
        else if (n==2)
        cout<<-1<<endl;
        else 
        {
            vector<vector<int>>arr(n,vector<int>(n,0));
            vector<vector<int>>ar(n,vector<int>(n,0));
            for (int i=0,k=1,l=n+1,m=n+2;i<n;i++)
            {
                for (int j=0;j<n;j++)
                {
                    if (i==j)
                    {
                        arr[i][j]=k;
                        k++;
                    }
                    else if (j>i)
                    {
                        arr[i][j]=l;
                        l+=2;
                    }
                    else if (j<i)
                    {
                        arr[i][j]=m;
                        m+=2;
                    }
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}