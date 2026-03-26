#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        int n,flag=1;
        cin >> n;
        long long int x1,x2,y1,y2,lx = -100000, ly = -100000, ux = 100000, uy = 100000, area=0;
        for (int i = 0; i < n; i++)
        {
            cin>>x1>>y1>>x2>>y2;
            lx = max(x1, lx);
            ly = max(y1, ly);
            ux = min(x2, ux);
            uy = min(y2, uy);
            
        }
        if ((lx<ux) && (ly<uy))
            {
                area = (ux - lx) * (uy - ly);
            }
        else 
        area=0;
        cout << "Case #"<<r+1<<": " << area << endl;
    }
    return 0;
}