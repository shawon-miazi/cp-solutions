#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],cnt=1,max=1;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]>=arr[i-1] && i>0)
        {
            cnt++;
            if (cnt>max)
            max=cnt;
        }
        else if (arr[i]<arr[i-1] && i>0)
        cnt=1;
    }
    cout<<max<<endl;
    return 0;
}