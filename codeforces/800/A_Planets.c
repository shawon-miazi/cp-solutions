#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int n,c;
        scanf("%d%d",&n,&c);
        int arr[n],fre[1000]={0},sum=0;
        for (int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            fre[arr[i]]++;
        }
        for (int i=0;i<1000;i++)
        {
            if (fre[i]>=c)
            sum+=c;
            else 
            sum+=fre[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}