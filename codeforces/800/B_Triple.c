#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int x = 0; x < t; x++)
    {
        int n, cnt = 0,max=0;
        scanf("%d", &n);
        int arr[n], fre[200005] = {0}, flag = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            fre[arr[i]]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (fre[i] >= 3)
            {
                cnt++;
                if (max <i)
                max=i;
            }
                
        }
        if (cnt == 1)
        {
            for (int i = 0; i <= n; i++)
            {
                if (fre[i] >= 3)
                {
                    printf("%d\n", i);
                    flag = 1;
                }
            }
        }
        if (cnt>1)
        {
            printf("%d\n",max);
            flag=1;
        }
        
        if (flag == 0)
            printf("-1\n");
    }
    return 0;
}