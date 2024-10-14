#include<stdio.h>
int main()
{
    double a,b,c,d,avg,newavg;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    avg = (a*2+b*3+c*4+d*1) / 10;

    if(avg >=7.0)
    {
        printf("Media: %.1lf\nAluno aprovado.\n",avg);
    }
    else if(avg < 5.0)
    {
        printf("Media: %.1lf\nAluno reprovado.\n",avg);
    }
    else
    {
        printf("Media: %.1lf\nAluno em exame.\n",avg);
        scanf("%lf",&newavg);
        printf("Nota do exame: %.1lf\n",newavg);

        avg = (newavg + avg) / 2.0;
        if(avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",avg);
    }

    return 0;

}
