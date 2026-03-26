#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n, cnt = 1, f = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, cnt = 1; i < n; i++, cnt++)
    {
        if (s[i] == 'R')
        {
            arr[i]++;
        }
        else if (s[i] == 'L')
        {
            arr[i]--;
        }
        if (i != 0 && i != n - 1 && ((arr[i + 1] - arr[i]) <= 1 || (arr[i] - arr[i - 1]) <= 1))
        {
            f = 1;
            break;
        }
        else if (i == 0 && (arr[i + 1] - arr[i]) <= 1)
        {
            f = 1;
            break;
        }
        else if (i == n - 1 && (arr[i] - arr[i - 1]) <= 1)
        {
            f = 1;
            break;
        }
    }
    if (f==1)
    cout<<cnt<<endl;
    else 
    cout<<-1<<endl;
    return 0;
}