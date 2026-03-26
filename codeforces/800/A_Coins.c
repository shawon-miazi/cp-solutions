#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int w=0;w<t;w++)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);
        if (k==1)
        {
            printf("YES\n");
        }
        else 
        {
            if ((k%2==0 && n%2==0) || (k%2==1 && n%2==1)|| n%2==0 || n%k==0 )
            printf("YES\n");
            else 
            printf("NO\n");
        }
        
    }
    return 0;
}