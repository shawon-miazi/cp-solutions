#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, f = 0;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (mp.find(x) == mp.end())
                mp.insert({x, 1});
            else
                mp[x]++;
        }
        priority_queue<int> v;
        for (auto x : mp)
        {
            v.push(x.second);
        }
        while (v.size()>1)
        {
            int a=v.top(),b;
            a--;
            v.pop();
            b=v.top();
            v.pop();
            b--;
            if (a)
            v.push(a);
            if (b)
            v.push(b);
            
        }
        if (v.size())
        cout<<v.top()<<endl;
        else
        cout<<0<<endl;
    }
}