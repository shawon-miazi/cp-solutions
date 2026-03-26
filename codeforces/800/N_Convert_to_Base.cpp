#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long power=1;
    long long int n,x,a,num=0;
    string str;
    
    if (t==1)
    {
        cin>>str>>x;
        for (int i=0,k,j=str.size()-1;i<str.size();i++,j--)
        {
            if(str[j]>='A' && str[j]<='Z')
            {
                k=str[j]-'A'+10;
            }
            else if (str[j]>='0'&& str[j]<='9')
            k=str[j]-'0';
            a=k*power;
            power*=x;
            num+=a;
        }
        cout<<num<<endl;
    }
    else if (t==2)
    {
        cin>>n>>x;
        for (int j=n;j>0;)
        {
            a=j%x;
            if (a>9)
            {
                str+=a-10+'A';
            }
            else 
            {
                str+=to_string(a);
            }
            j/=x;
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}