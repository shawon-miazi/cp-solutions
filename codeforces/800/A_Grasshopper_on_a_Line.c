#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0 ;w<t ;w++)
    {
        int d,k;
        scanf("%d%d",&d,&k);
        if (d%k!=0)
        {
            printf("1\n%d\n",d);
        }
        else 
        {
            printf("2\n%d %d\n",d-k-1,k+1);
        }

    }
    return 0;
}