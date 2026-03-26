#include<stdio.h>
#include<math.h.>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int n;
        scanf("%d",&n);
        int s;
        s=ceil(n/2.0);
        printf("%d\n",s);
    }
    return 0;
}