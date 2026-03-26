#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int w = 0; w < t; w++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], e = 0, o = 0;
        int min = 1000000000;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                e++;
            else
                o++;
            if (min > arr[i])
                min = arr[i];
        }
        if (o == 0 || e == 0 || min % 2 == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}