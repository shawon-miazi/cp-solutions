#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, pos;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << ((k - 1) % n) + 1 << endl;
        }
        else
        {
            pos = ((k-1) /(n / 2));
            int ans=((k - 1) % n)+1;
            cout<<((pos+ans-1)%n)+1<<endl;
        }
    }
} 