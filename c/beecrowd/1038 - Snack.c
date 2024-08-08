#include<stdio.h>
int main(void)
{
    int x,y;
    double res;
    scanf("%d %d",&x,&y);

    if(x==1)
    {
        res = 4*y;
    }
    else if(x==2)
    {
        res = 4.5*y;
    }
    else if(x==3)
    {
        res = 5*y;
    }
    else if(x==4)
    {
        res = 2*y;
    }
    else if(x==5)
    {
        res = 1.5*y;
    }

    printf("Total: R$ %.2lf\n",res);
}
