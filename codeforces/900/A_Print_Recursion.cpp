#include<bits/stdc++.h>
using namespace std;
void recf(int a)
{
    if (a==0)
    return ;
    else {
        cout<<"I love Recursion"<<endl;
        a--;
        return recf(a);
    }
}
int main()
{
    int n;
    cin>>n;
    recf(n);
    return 0;
}