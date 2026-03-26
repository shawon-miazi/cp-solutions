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
        int arr[n],min=100000000;
        long long int sum=0;
        for (int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if (min>arr[i])
            min=arr[i];
        }
        for (int i=0;i<n;i++)
        {
            sum+=(arr[i]-min);
        }
        printf("%d\n",sum);
    }
    return 0;
}