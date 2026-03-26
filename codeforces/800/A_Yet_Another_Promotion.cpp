#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        long long int sum,sum1,sum2,a,b,n,m,i;
        cin >> a >> b >> n >> m;
        // int temp =a;
        // a=b;
        // b=temp;
        if (n <= m)
        {
            sum1=(n * b);
            sum2 = n* a;
            if (sum1 < sum2)
            sum=sum1;
            else 
            sum=sum2;
        }
        else if (n > m)
        {
            sum1=(m * a);
            sum2 = (m+1)* b;
            if (sum2 > sum1 && b<=a)
            {
                int i=n%(m+1);
                if (i==0)
                sum = (n/(m+1))*m* a;
                else
                sum = ((n/(m+1))*m* a) + (b*(i));
            }
            else if (sum2 > sum1 && b>a)
            {
                int i=n%(m+1);
                if (i==0)
                sum = (n/(m+1))*m* a;
                else
                sum = ((n/(m+1))*m* a) + (a*(i));
            }
            else if (sum2 <= sum1)
            sum=n*b; 
        }
        cout<<sum<<endl;
    }
    return 0;
}