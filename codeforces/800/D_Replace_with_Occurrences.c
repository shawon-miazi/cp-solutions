#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int w = 0; w < t; w++)
    {
        int n, cnt = 0, flag = 0;
        scanf("%d", &n);
        int arr[n], fre[200010] = {0}, ar[200010]={0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            fre[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (fre[i] > 1)
                flag = 1;
        }
        if (flag == 1)
        {
            int x=0;
            for (int i = 0; i < n; i++)
            {
                if (fre[i] > 0)
                {
                    for (int j = 1; j < n; j++)
                    {
                        if (fre[j] == 0)
                        {
                            for (int k = 0; k < fre[i]; k++,x++)
                            {
                                ar[x] = j;
                            }
                            fre[j] = -1;
                        }
                    }
                }
            }
            for (int i=0;i<n;i++)
            {
                if (ar[i]>0)
                printf("%d ",&ar[i]);
            }
            printf("\n");
        }
        else
        printf("-1\n");
    }
    return 0;
}
