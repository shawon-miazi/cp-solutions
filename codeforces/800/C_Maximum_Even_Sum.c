#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        long long int a,b,num=-1,c;
        scanf("%lld%lld",&a,&b);
        c=b/2;
        if (a==1)
        {
            for (int j=1;j<=b;j++)
            {
                if ((b%j)==0 && ((a*j)+(b/j))%2==0 )
                {
                    num=((a*j)+(b/j));
                    break;
                }
            }
        }
        else if (b==1)
        {
            if((a+b)%2==0)
            num=a+b;
        }
        else if (b%2==0 && b==2 && a%2==0)
            {
                num=a+b;
            }
        else if (b%2==0 && b==2 && a%2!=0)
            num=-1;
        else if (b%2==0 && b!=2 && a%2==0)
        {
            c=b/2;
            num=((a*c)+(b/c));
        }
        else if (b%2==0 && b!=2 && a%2==1)
        {
            if ((b/2)%2==0)
                num=num=((a*c)+(b/c));
            else if ((b/2)%2==1 )
            {
                num=-1;
            }
        }
        else{

            for (int j=1;j<=b;j++)
            {
                if ((b%j)==0)
                {
                    if (((a*j)+(b/j))%2==0 && ((a*j)+(b/j))>num)
                    num=((a*j)+(b/j));
                }
            }
        }
        printf("%lld\n",num);
    }
    return 0;
}
