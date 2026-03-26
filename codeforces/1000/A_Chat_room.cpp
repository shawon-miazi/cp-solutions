#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,h="hello";
    cin>>s;
    int cnt=0,j=0;
    for (int i=0;h[i];i++)
    {
        for (;s[j];j++)
        {
            if(h[i]==s[j])
            {
                cnt++;
                j++;
                break;
            }
        }
        if (cnt==5)
        break;
    }
    if (cnt==5)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}