#include<stdio.h>
int main()
{
    int a,b,val;
    char sign;

    scanf("%d %c %d",&a,&sign,&b);

    if(sign == '>')
    {
       val = a > b;
    }
    else if(sign == '<')
    {
        val = a < b;
    }
    else if(sign == '=')
    {
        val = (a==b);
    }

    if(val == 0)
    {
        printf("Wrong\n");
    }
    else
    {
        printf("Right\n");
    }

    return 0;
}
