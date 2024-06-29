#include<stdio.h>
int main(void)
{
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);

    float result = a/b;

    printf("%.3f km/l\n",result);
}
