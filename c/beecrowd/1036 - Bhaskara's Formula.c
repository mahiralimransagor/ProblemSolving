#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);

    r1 = (-b+sqrt(b*b - 4*a*c)) / (2*a);
    r2 = (-b-sqrt(b*b - 4*a*c)) / (2*a);

    if(a == 0 || b*b < 4*a*c)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
}
