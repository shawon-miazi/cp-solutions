#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int x=0; x<t;x++)
    {
        int n,min=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for (int i=0;str[i];i++)
        {
            if (min<str[i])
            min=str[i];
        }
        printf("%d\n",min-'a'+1);
    }
    return 0;
}