#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int ano = n/365;
    n = n%365;
    printf("%d ano(s)\n",ano);
    int mes = n/30;
    n = n%30;
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",n);
}
