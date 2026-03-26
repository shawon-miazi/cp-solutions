#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,arn,ara;
    cin>>n>>m>>a;
    arn=ceil((double)n/a);
    ara=ceil((double)m/a);
    long long int num=arn*ara;
    cout<<num<<endl;
    return 0;
}