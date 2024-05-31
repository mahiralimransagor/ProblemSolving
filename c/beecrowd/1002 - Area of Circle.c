#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);

    double result = 3.14159 * a * a;

    printf("A=%0.4lf\n",result);
    return 0;
}
