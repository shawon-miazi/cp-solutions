#include<bits/stdc++.h>
using namespace std;
void prir(int a)
{
    if (a==0) return;
    prir(a-1);
    cout<<a<<endl;
}
int main()
{
    int n;
    cin>>n;
    prir(n);
    return 0;
}