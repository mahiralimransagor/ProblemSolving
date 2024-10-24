#include<stdio.h>
int main()
{
    long long int a,b,i,sum=0,temp;

    while(1)
    {
        sum=0;
        scanf("%lld %lld",&a,&b);

        if(a <= 0 || b <= 0)
        {
            break;
        }

        if(b>a)
        {
            temp = a;
            a = b;
            b = temp;
        }

        for(i=b; i<=a; i++)
        {
            sum += i;
            printf("%d ",i);
        }
        printf("sum =%lld\n",sum);
    }

    return 0;
}
