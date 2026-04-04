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
    createprime(50);
    for (int i=0,l=primes.size();i<l;i++)
    cout<<primes[i]<<" ";
    cout<<endl;
	while (t--)
	{
	    long long int a,va=1;
        cin>>a;
        
        cout<<endl;
	}

}
