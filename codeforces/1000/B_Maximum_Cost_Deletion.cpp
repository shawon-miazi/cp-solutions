#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, sum = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        char c;
        if (b >= 0)
        {
            sum = ((a * n) + (b*n));
            cout << sum << endl;
        }
        else
        {
            sum=unique(s.begin(),s.end())-s.begin();
            sum/=2;
            sum++;
            sum=(a*n)+(b*sum);
            cout<<sum<<endl;
        }
    }
    return 0;
}