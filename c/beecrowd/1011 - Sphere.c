#include<stdio.h>
int main()
{
    int n;
    double result;
    scanf("%d",&n);

    result = (4/3.0)*3.14159*n*n*n;

    printf("VOLUME = %.3lf\n",result);

    return 0;
}
