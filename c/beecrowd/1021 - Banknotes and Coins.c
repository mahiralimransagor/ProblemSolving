#include<stdio.h>
int main(void)
{
    double n;
    scanf("%lf",&n);
    int note = n*100;

    int hun = note/10000;
    note = note%10000;
    int fif = note/5000;
    note = note %5000;
    int twen = note/2000;
    note = note%2000;
    int ten = note/1000;
    note = note%1000;
    int five = note/500;
    note = note%500;
    int two = note/200;
    note = note % 200;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hun);
    printf("%d nota(s) de R$ 50.00\n",fif);
    printf("%d nota(s) de R$ 20.00\n",twen);
    printf("%d nota(s) de R$ 10.00\n",ten);
    printf("%d nota(s) de R$ 5.00\n",five);
    printf("%d nota(s) de R$ 2.00\n",two);

    int chun = note/100;
    note = note%100;
    int cfif = note/50;
    note = note%50;
    int ctwen = note/25;
    note = note%25;
    int cten = note/10;
    note = note%10;
    int cfive = note/5;
    note = note%5;
    int one = note/1;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",chun);
    printf("%d moeda(s) de R$ 0.50\n",cfif);
    printf("%d moeda(s) de R$ 0.25\n",ctwen);
    printf("%d moeda(s) de R$ 0.10\n",cten);
    printf("%d moeda(s) de R$ 0.05\n",cfive);
    printf("%d moeda(s) de R$ 0.01\n",one);
}
