#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,cnt=0,num=0,i;
    cin>>n;
    for (i=4;i<=n;i++)
    {
        cnt=0;
        for (int j=2;j<=sqrt(i);j++)
        {
            if (i%j==0 && i/j==j)
            {
                cnt++;
            }
            else if (i%j==0 && i/j!=j)
            {
                cnt+=2;
            }
            if (cnt>2)
            {
            
                break;
            }

        }
        cout<<cnt<<" ";
        if (cnt==2)
        {
            num++;
        }
    }
    cout<<num<<endl;
    return 0;
}