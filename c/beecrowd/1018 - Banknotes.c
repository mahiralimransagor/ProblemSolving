#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d",&n);
    m = n;
    int hun = m/100;
    m = m%100;
    int fif = m/50;
    m = m %50;
    int twen = m/20;
    m = m%20;
    int ten = m/10;
    m = m%10;
    int five = m/5;
    m = m%5;
    int two = m/2;
    m = m % 2;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",hun);
    printf("%d nota(s) de R$ 50,00\n",fif);
    printf("%d nota(s) de R$ 20,00\n",twen);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",m);
}
