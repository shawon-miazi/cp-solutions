#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j,cnt=0,num=0;
        cin>>n;
        vector<int> arr(2*n,0),a(n,0),b(n,0);
        for (int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int temp=arr[0];
        for (int i=0;i<2*n;i++)
        {
            if (arr[i]==temp)
            {
                cnt++;
            }
            else
            {
                if (cnt==3 || cnt==1)
                num++;
                else
                num+=2;
                cnt=0;
                temp=arr[i];
                i--;
            }
        }
        if (num!=0)
        cout<<num<<endl;
        else 
        cout<<2<<endl;
    }
    return 0;
}