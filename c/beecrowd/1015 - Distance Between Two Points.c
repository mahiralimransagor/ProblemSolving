#include<stdio.h>
#include<math.h>
int main(void)
{
    float x1,x2,y1,y2;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);

    float xyd = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    float result = sqrt(xyd);
    printf("%.4f\n",result);
}
