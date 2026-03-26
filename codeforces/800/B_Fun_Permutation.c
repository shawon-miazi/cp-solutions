#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],ar[n],max=0;
        for (int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if (arr[i]>max)
            max=arr[i];
        }
        int sum =max+1;
        for (int i=0;i<n;i++)
        {
            ar[i]=sum-arr[i];
            printf("%d ",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
