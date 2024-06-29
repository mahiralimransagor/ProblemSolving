#include<stdio.h>
int main()
{
    int s1,s2,q1,q2;
    float p1,p2,r;

    scanf("%d %d %f",&s1,&q1,&p1);
    scanf("%d %d %f",&s2,&q2,&p2);

    r = q1*p1 + q2*p2;

    printf("VALOR A PAGAR: R$ %.2f\n",r);

    return 0;
}
