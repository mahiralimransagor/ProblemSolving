#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int hour = n/3600;
    n = n%3600;
    int min = n/60;
    n = n%60;

    printf("%d:%d:%d\n",hour,min,n);
}
