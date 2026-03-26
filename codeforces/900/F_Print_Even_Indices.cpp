#include<bits/stdc++.h>
using namespace std;
void prie(int n)
{
    int i=0;
    if(n<10)
    {
        cout<<n<<" ";
        i++;
        return ;
    }
    else if (i%2==0)
    {
        cout<<n%10<<" ";
        i++;
    }
    else 
    i++;
    prie(n/10);

}
int main()
{
    int n;
    cin>>n;
    prie(n);
    return 0;
}