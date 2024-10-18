#include<stdio.h>
int main()
{
    long int a,b,c,high,mid,low;
    scanf("%ld %ld %ld",&a,&b,&c);

    if(a>=b && a>=c)
    {
        high = a;
        if(b>=c)
        {
            mid = b;
            low = c;
        }
        else
        {
            mid = c;
            low = b;
        }
    }
    else if(b>=a && b>=c)
    {
        high = b;
        if(a>=c)
        {
            mid = a;
            low = c;
        }
        else
        {
            mid = c;
            low = a;
        }
    }
    else
    {
        high = c;
        if(a>=b)
        {
            mid = a;
            low = b;
        }
        else
        {
            mid = b;
            low = a;
        }
    }

    printf("%d\n%d\n%d\n",low,mid,high);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
