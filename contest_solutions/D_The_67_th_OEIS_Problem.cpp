#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
void createprime (int n)
{
    for (int j=2;j<=n;j++)
    {
        int f=0;
        for (int k=2;k*k<=j;k++)
        {
            if (j%k==0)
            {
                f=1;
                break;
            }
        }
        if (f==0)
        {
            primes.push_back(j);
        }
    }
}

int main() {
	int t;
	cin>>t;
    createprime(1000000);
    // for (int i=0,l=primes.size();i<l;i++)
    // cout<<primes[i]<<" ";
    // cout<<endl;
	while (t--)
	{
	    int a;
        cin>>a;
        vector<long long int >arr(a+1,1);
        cout<<arr[0]<<" ";
        for (long long int i=1,j=0;i<a;i++,j++)
        {
            arr[i]*=primes[j];
            arr[i+1]*=primes[j];
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}

}
