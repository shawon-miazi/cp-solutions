#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int n,cnt=0;
        scanf("%d",&n);
        int num=n/2;
        char str[n];
        scanf("%s",str);
        for (int i=0,j=n-1;i<n/2;i++,j--)
        {
            if (((str[i]=='0' && str[j]=='1') || (str[i]=='1' && str[j]=='0')) && i<num){
                str[i]='n';
                str[j]='n';
            }
            else 
            break;
        }
        for (int i=0;i<n;i++)
        {
            if (str[i]=='0' || str[i]=='1')
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}