#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,num,cnt=0;
        cin>>n;
       // if (n<10)
        ///cout<<n<<endl;
        for (int j=n;j>0;cnt++)
        {
            j/=10;
        }
        int a=pow(10,cnt-1);
        n/=a;
        cnt=(9*(cnt-1)+n);
        cout<<cnt<<endl;
    }
}