#include<stdio.h>
int main()
{
    double a,b,result;

    scanf("%lf",&a);
    scanf("%lf",&b);

    result = (a*3.5+b*7.5)/(3.5+7.5);
    printf("MEDIA = %.5lf\n",result);
    return 0;
}
