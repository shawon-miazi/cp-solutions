#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,o=0,e=0;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]%2)
            o++;
            else 
            e++;
        }
        int a=max(e,o),b=min(e,o);
        if ((a-b)>1)
        cout<<(2*b)+1<<endl;
        else 
        cout<<a+b<<endl;
        
    }
}
