#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n, asum, bsum;
    cin >> n;
    int a = abs(n);

    if (n < 0)
    {
        asum = (n / 10);
        int temp = (a % 10);

        bsum = (n / 100);

        string s = to_string(bsum);
        string c = to_string(temp);
        string sum=s+c;
        bsum=stoi(sum);
        if (bsum>0)
        bsum*=-1;
        if (asum>bsum)
        cout<<asum<<endl;
        else
        cout<<bsum<<endl;
    }

    else
        cout << n << endl;
    return 0;
}