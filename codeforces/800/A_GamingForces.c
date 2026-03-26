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
        int arr[n],cnt=0,num=0;
        for (int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i=0;i<n;i++)
        {
            int max=arr[i],temp;
            for (int j=i+1;j<n;j++)
            {
                if (max>arr[j])
                {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]>=2)
            {
                cnt++;
                arr[i]=0;
            }
            if (arr[i]==1)
            {
                num++;
            }
        }
        cnt+=ceil(num/2.0);
        printf("%d\n",cnt);
    }
    return 0;
}