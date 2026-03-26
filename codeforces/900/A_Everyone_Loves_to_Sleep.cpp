#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
  {
    int n, h, m, h1, m1, h2, m2, h3 = 25, m3 = 61;
    cin >> n >> h >> m;
 
    for (auto i = 0; i < n; i++)
    {
      cin >> h1 >> m1;
 
      h2 = h1 - h;
      m2 = m1 - m;
 
      if (m2 < 0)
      {
        m2 += 60;
        h2 -= 1;
      }
 
      if (h2 < 0)
      {
        h2 += 24;
      }
 
      if ((h2 < h3) || (h2 == h3 && m2 < m3))
      {
        h3 = h2;
        m3 = m2;
      }
    }
 
    cout << h3 << " " << m3;
    cout << "\n";
  }
 
  return 0;
}