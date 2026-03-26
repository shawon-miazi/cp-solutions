#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for (int w=0;w<t;w++)
    {
        int n,flag=0,x=0,y=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for (int i=0;str[i];i++)
        {
            if (str[i]=='U')
            y++;
            else if (str[i]=='D')
            y--;
            else if (str[i]=='R')
            x++;
            else if (str[i]=='L')
            x--;
            if (x==1 && y==1)
            flag =1;
        }
        if (flag == 1)
        printf("YES\n");
        else 
        printf("NO\n");
    }
    return 0;
}