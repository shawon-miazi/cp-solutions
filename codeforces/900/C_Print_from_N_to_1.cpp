#include<bits/stdc++.h>
using namespace std;
void pri(int a)
{
    if (a==1) 
    {
        cout<<1<<endl;
        return ;
    }
    cout<<a<<" ";
    pri(a-1);
}
int main()
{
    int n;
    cin>>n;
    pri(n);
    return 0;
}