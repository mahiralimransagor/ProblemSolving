#include<stdio.h>
int main()
{
    int a,b,c,sign1,sign2,val;
    scanf("%d %c %d %c %d",&a,&sign1,&b,&sign2,&c);

    if(sign1 == '+')
    {
        val = a+b;

        if(val == c)
        {
            printf("Yes\n");
        }
        else
        {
            val = a + b;
            printf("%d\n",val);
        }
    }
    else if(sign1 == '-')
    {
        val = a-b;

        if(val == c)
        {
            printf("Yes\n");
        }
        else
        {
            val = a - b;
            printf("%d\n",val);
        }
    }
    else
    {
        val = a*b;

        if(val == c)
        {
            printf("Yes\n");
        }
        else
        {
            val = a * b;
            printf("%d\n",val);
        }
    }

    return 0;
}
