#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        long long int sum = 0;
        int n, cnto = 0, mine = 10000000, mino = 10000000, cnte = 0,flag=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0 && arr[i] < mine)
            {
                mine = arr[i];
            }
            if (arr[i] % 2 == 1 && arr[i] < mino)
            {
                mino = arr[i];
                
            }
            if (arr[i]%2==1)
            {
                if ((arr[i]/2)%2==0)
                {
                    flag=1;
                }
                
            }
        }
        if (sum % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (cnte = 0; (mine % 2) != 1; cnte++)
            {
                mine /= 2;
            }

            for (cnto = 0; mino % 2 != 0; cnto++)
            {
                mino /= 2;
            }

            if (flag==1)
                cout << 1 << endl;
            else if (cnto <cnte)
            cout<<cnto<<endl;
            else
                cout << cnte << endl;
        }
    }
    return 0;
}