#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    float triarea = 0.5 * a * c;
    float cirarea = 3.14159 * c * c;
    float traparea = (a+b)/2 * c;
    float quadarea = b*b;
    float retarea = a * b;

    printf("TRIANGULO: %.3f\n",triarea);
    printf("CIRCULO: %.3f\n",cirarea);
    printf("TRAPEZIO: %.3f\n",traparea);
    printf("QUADRADO: %.3f\n",quadarea);
    printf("RETANGULO: %.3f\n",retarea);

    return 0;

}
