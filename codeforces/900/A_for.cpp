#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while (t--)
    {
        vector<int> arr(3);
        for (int i=0;i<3;i++)
        cin>>arr[i];
        sort(arr.begin(),arr.end());
        if (arr[0]+arr[1]>arr[2])
        cout<<"OK"<<endl;
        else 
        cout<<"Wrong!!"<<endl;
    }
    return 0;
}