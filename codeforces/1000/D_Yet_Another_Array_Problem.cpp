#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
void createprime(int a)
{

    for (int i = 2; i <= a; i++)
    {
        int f = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            primes.push_back(i);
        }
    }
}
int check(long long n)
{
    for (int j = 0, l = primes.size(); j < l; j++)
    {
        if (n % primes[j] != 0)
        {
            return primes[j];
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    createprime(70);
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (check(arr[i]) != 0)
            {
                cout << check(arr[i]) << endl;
                break;
            }
        }
    }
}