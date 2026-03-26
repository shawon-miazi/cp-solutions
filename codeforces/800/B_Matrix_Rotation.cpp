#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int arr[2][2],flag=0;
        int ar[4];
        for (int j=0;j<4;j++)
        cin>>ar[j];
        if (((ar[0]>ar[1]&&ar[2]>ar[3]) &&  (ar[0]>ar[2]&&ar[1]>ar[3] || ar[0]<ar[2]&&ar[1]<ar[3])) || ((ar[0]<ar[1]&&ar[2]<ar[3]) && (ar[0]<ar[2]&&ar[1]<ar[3] || ar[0]>ar[2]&&ar[1]>ar[3])))
        flag=1;
        if (flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}