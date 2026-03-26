#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int n,a,cnt=0;
        scanf("%d",&n);
        for (int j=0;j<n;j++,a+=2)
        {
            if (n%2==0)
            {
                cnt+=2;
                printf("%d ",cnt);
            }
            else
            {
                cnt+=1;
                printf("%d ",cnt);
            }
        }
        printf("\n");
    }
    return 0;
}