#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 1,j=0,m,x=1;
        cin >> n;
        vector<int> arr(n * 4, 0);
        m=n;
        if (n%2==1)
        {
            for (int j=0,l=0,k=3;l<5;l++,k--)
            {
                arr[j]=i;
                j+=k;
            }
            arr[1]=2;
            arr[2]=2;
            arr[4]=3;
            arr[7]=2;
            arr[8]=3;
            arr[9]=2;
            arr[10]=3;
            arr[11]=3;
            i=4;
            j=12;
            m=n-3;
        }
        if (n % 2 == 0 || m%2==0)
        {
            for (int  x=0,k = 3, l = 0; x < (m / 2);)
            {
                if (l == 4)
                {
                    i++;
                    x++;
                    l = 0;
                    j+=2;
                    k=3;
                }
                if (l == 0)
                {
                    arr[j] = i;
                    l++;
                }
                if (x>=(m/2))
                break;
                j += k;
                arr[j] = i;
                l++;
                k--;
            }
            for (int j=0,l=0;j<(4*n);j++)
            {
                if (l==4)
                {
                    i++;
                    l=0;
                }
                if (arr[j]==0)
                {
                    arr[j]=i;
                    l++;
                }
            }
        }
        for (int i = 0; i < ( n* 4); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}