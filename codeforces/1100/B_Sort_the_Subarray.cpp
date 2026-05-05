#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,p1=-1,p2=-1;
        cin >> n;
        vector<int> arr(n), ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (p1==-1)
            {
                if (arr[i]!=ar[i])
                {
                    p1=i;
                }
            }
        }
        for (int i=n-1;i>=0;i--)
        {
            if (arr[i]!=ar[i])
            {
                p2=i;
                break;
            }
        }
        for (int i=p1-1;i>=0;i--)
        {
            int x=ar[p1];
            if (ar[i]<=x && arr[i]==ar[i])
            {
                p1--;
                x=ar[p1];
            }
            else 
            break;
        }
        for (int i=p2+1;i<n;i++)
        {
            int x=ar[p2];
            if (ar[i]>=x && arr[i]==ar[i])
            {
                p2++;
                x=ar[p2];
            }
            else 
            break;
        }
        cout<<p1+1<<" "<<p2+1<<endl;
    }
}