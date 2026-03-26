#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[55];
    for (int i=0;i<n;i++)
    {
        scanf("%s",str);
        int len=strlen(str);
        
        int flag=0;
        for (int j=0;j<(len/2)-1;j++)
        {
            if (len>3 && (str[j]!=str[j+1]))
            flag=1;
        }
        if (flag==0)
        printf("NO\n");
        else 
        printf("YES\n");
    }
    
    return 0;
}