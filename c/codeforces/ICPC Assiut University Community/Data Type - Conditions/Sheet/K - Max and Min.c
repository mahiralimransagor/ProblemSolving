#include<stdio.h>
int main()
{
    int a,b,c,min,max;
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c)
    {
        max = a;
        if(b<=a && b<=c)
        {
            min = b;
        }
        else if(c<=a && c<=b)
        {
            min = c;
        }
        else if(b==c)
        {
            min = b;
        }
    }
    else if(b>=a && b>=c)
    {
        max = b;
        if(a<=b && a<=c)
        {
            min = a;
        }
        else if(c<=a && c<=b)
        {
            min = c;
        }
        else if(a==c)
        {
            min = a;
        }
    }
    else if(c>=a && c>=b)
    {
        max = c;
        if(a<=b && a<=c)
        {
            min = a;
        }
        else if(b<=a && b<=c)
        {
            min = b;
        }
        else if(a==b)
        {
            min = a;
        }
    }
    else
    {
        max = a;
        min = a;
    }

    printf("%d %d\n",min,max);
    return 0;
}
