#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        int n,sum=0,arr[26]={0},cnt=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for (int i=0;str[i];i++)
        {
            if (str[i]>='A'&& str[i]<='Z')
            {
                if (arr[str[i]-'A']==0)
                arr[str[i]-'A']+=2;
                else 
                arr[str[i]-'A']++;
            }
        }
        for (int i=0;i<26;i++)
        {
            sum+=arr[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}