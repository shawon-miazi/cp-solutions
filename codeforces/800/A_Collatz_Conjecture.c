#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int k,x;
        scanf("%d%d",&k,&x);
        int n=x;
        for (int j=k;j>0;j--)
        {
            n*=2;
        }
        printf("%d\n",n);
    }
    return 0;
}
