#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        string a;
        getline(cin,a);
        
        int arr [3][2],flag=1 ;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        if ((arr[0][0]==arr[1][0] || arr[1][0]==arr[2][0] ||arr[2][0]==arr[0][0]) && (arr[0][1]==arr[1][1] || arr[1][1]==arr[2][1] ||arr[2][1]==arr[0][1]))
        flag=0;
        if (flag==0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}