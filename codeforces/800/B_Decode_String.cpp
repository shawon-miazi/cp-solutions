#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        int n;
        cin>>n;
        char c;
        string s="",arr;
        cin>>arr;
        
        for (int i=n-1;i>=0;)
        {
            if(arr[i]=='0')
            {
                c=(arr[i-1]-'0'+((arr[i-2]-'0')*10)+'a'-1);
                s+=c;
                i-=3;
            }
            else 
            {
                c=(arr[i]-'0'+'a'-1);
                s+=c;
                i--;
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
     }
    return 0;
}