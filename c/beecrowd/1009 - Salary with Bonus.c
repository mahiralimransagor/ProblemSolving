#include<stdio.h>

int main()
{
    char a[15];
    double b,c,d;

    scanf("%s",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    d = b + (c*0.15);
    printf("TOTAL = R$ %.2lf\n",d);

    return 0;
}
