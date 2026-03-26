#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int arr[3],cnt[10]={0},max=0,n;
        scanf("%d",n);
        for (int i=0;n>0;i++)
        {
            arr[i]=n%10;
            n/=10;
            cnt[arr[i]]++;
        }
        for (int i=0;i<10;i++)
        {
            if (cnt[i]>max)
            max=cnt[i];
        }
        if (max==1)
        printf("4\n");
        else if (max==4)
        printf("-1\n");
        else if (max==3)
        printf("6\n");
        else if (max==2)
        printf("4\n");
    }
    return 0;
}
