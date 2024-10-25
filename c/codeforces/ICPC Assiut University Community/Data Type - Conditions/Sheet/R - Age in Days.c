#include<stdio.h>
int main(void)
{
    long int n,year,month;
    scanf("%ld",&n);

    year = n/365;
    printf("%ld years\n",year);
    n = n - (year*365);
    month = n/30;
    printf("%ld months\n",month);
    n = n - (month*30);
    printf("%ld days\n",n);

}
